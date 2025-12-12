/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mboutte <mboutte@student.42lyon.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 15:16:18 by mboutte           #+#    #+#             */
/*   Updated: 2025/12/12 15:10:27 by mboutte          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

typedef struct t_flag_printf
{
	int	hash;
	int	space;
	int	plus;
	int	minus;
	int	zero;
	int	dot;
	int	atoi;
}	t_flag_printf;

int		ft_atoi_printf(char **str);
int		ft_min(int a, int b);
int		ft_min_printf(int a, int b);
int		ft_max(int a, int b);
int		ft_putchar_printf(char c, t_flag_printf flag);
int		ft_puthexa_printf(unsigned int n, t_flag_printf flage, int maj);
int		ft_putchar_printf(char c, t_flag_printf flag);
int		ft_putnbr_printf(long int n, t_flag_printf flag);
int		ft_putpointer_printf(void *ptr, t_flag_printf flag);
int		ft_putstr_printf(char *s, t_flag_printf flag);
int		ft_putunsigned_printf(unsigned int n, t_flag_printf flag);
int		ft_strlen_printf(char *str, t_flag_printf flag);
int		ft_unsigned_size_printf(unsigned int n, t_flag_printf flag);
int		ft_hexa_size_printf(unsigned int n, t_flag_printf flag);
int		ft_ln_len_printf(long int n, t_flag_printf flag);
int		ft_strlen_printf(char *str, t_flag_printf flag);
int		ft_ptrlen(unsigned long ptr);
int		ft_printf(const char *fmt, ...)
		__attribute__((format(printf, 1, 2)));

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_isalnum(int i);
int		ft_isalpha(int i);
int		ft_isascii(int i);
int		ft_isdigit(int i);
int		ft_isprint(int i);
char	*ft_itoa(int n);
void	ft_lstadd_front(t_list **lst, t_list *new);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstclear(t_list	**lst, void (*del)(void *));
void	ft_lstdelone(t_list	*lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)	(void *));
int		ft_lstsize(t_list *lst);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(char *src);
void	ft_striteri(char *s, void (*f)(unsigned int, char	*));
char	*ft_strjoin(const char *s1, const char *s2);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_substr(char const *s, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);
#endif