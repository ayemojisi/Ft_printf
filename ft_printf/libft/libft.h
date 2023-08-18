/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iergun <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/20 12:28:36 by iergun            #+#    #+#             */
/*   Updated: 2023/01/08 18:10:34 by iergun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int			ft_isalpha(int s);
int			ft_isalnum(int e);
int			ft_isdigit(int r);
int			ft_isascii(int k);
int			ft_isprint(int a);
int			ft_toupper(int n);
int			ft_tolower(int c);
int			ft_atoi(const char *d1);
int			ft_strncmp(const char *d1, const char *d2, size_t n);
int			ft_memcmp(const void *d1, const void *d2, size_t n);
char		*ft_itoa(int n);
char		*ft_strdup(const char *d1);
char		**ft_split(char const *s, char c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *d1, int c);
char		*ft_strnstr(const char *d1, const char *d2, size_t n);
char		*ft_strjoin(char const *d1, char const *d2);
char		*ft_substr(const char *s, unsigned int start, size_t len);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char		*ft_strtrim(char const *s1, char const *set);
void		ft_bzero(void *s, size_t n);
void		ft_putchar_fd(char c, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putstr_fd(char *s, int fd);
void		*ft_calloc(size_t s1, size_t s2);
void		*ft_memset(void	*b, int c, size_t len);
void		*ft_memchr(const void *s, int c, size_t n);
void		*ft_memcpy(void *d1, const void *d2, size_t n);
void		*ft_memmove(void *d1, const void *d2, size_t n);
void		ft_striteri(char *s, void (*f)(unsigned int, char *));
size_t		ft_strlen(const char *c);
size_t		ft_strlcat(char *d1, const char *d2, size_t n);
size_t		ft_strlcpy(char *d1, const char *d2, size_t n);

#endif
