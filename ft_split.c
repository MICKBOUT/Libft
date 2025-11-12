/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/07 16:34:32 by mboutte           #+#    #+#             */
/*   Updated: 2025/11/07 16:34:32 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_split_size_allocate(const char *s, char c)
{
	size_t	i;
	size_t	size;
	int		in_sep;

	in_sep = 1;
	i = 0;
	size = 0;
	while (s[i])
	{
		if (in_sep == 1 && s[i] != c)
		{
			size++;
			in_sep = 0;
		}
		else if (in_sep == 0 && s[i] == c)
			in_sep = 1;
		i++;
	}
	return (size + 1);
}

static int	ft_split_add(char **split, size_t *i, const char *str, char sep)
{
	size_t	end;
	size_t	j;

	while (str[*i] && (char) str[*i] == sep)
		(*i)++;
	end = *i;
	while (str[end] && (char) str[end] != sep)
		end++;
	if (str[*i] == '\0')
	{
		*split = (NULL);
		return (1);
	}
	*split = malloc(sizeof(char) * (end - *i + 1));
	if (!*split)
		return (-1);
	j = 0;
	while (*i < end)
		(*split)[j++] = (char) str[(*i)++];
	(*split)[j] = '\0';
	return (0);
}

static void	ft_freeing(char ***split, size_t j)
{
	size_t	i;

	i = 0;
	while (i < j)
		free((*split)[i++]);
	free(*split);
	*split = NULL;
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		state;
	size_t	i;
	size_t	j;

	state = 0;
	if (!s)
		return (NULL);
	split = malloc(sizeof(char *) * ft_split_size_allocate(s, c));
	if (!split)
		return (NULL);
	j = 0;
	i = 0;
	while (state == 0)
		state = ft_split_add(&split[j++], &i, s, c);
	if (state == -1)
		ft_freeing(&split, j);
	return (split);
}

/*int	main(void)
{
	char const *str = "";
	char **split = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", '^');
	int i = 0;
	
	while (split[i])
		__builtin_printf("%s\n", split[i++]);
	return (0);
}*/
