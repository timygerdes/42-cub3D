/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/14 13:21:28 by tgerdes           #+#    #+#             */
/*   Updated: 2022/04/10 15:17:06 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# ifndef MAX_FD
#  define MAX_FD 1024
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_print
{
	va_list	args;
	int		total_len;
}	t_print;

/*
	Libft functions
*/
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(char *s1, char *s2, size_t n);
int		ft_atoi(const char *str);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strdup(const char *s1);
void	*ft_calloc(size_t count, size_t size);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strappend(char const *s1, char const c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (f) (unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void*));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
/*
	get_next_line functions
*/
char	*get_next_line(int fd);
char	*gnl_strchr(const char *s, int c);
char	*ft_gnl_strjoin(char const *s1, char const *s2);
size_t	slen(const char *s);
char	*gnl_substr(char const *s, unsigned int start, size_t len);
void	*ft_gnl_memcpy(void *dst, const void *src, size_t n);
void	*ft_gnl_memmove(void *dst, const void *src, size_t len);
void	*ft_gnl_malloc(size_t count, size_t size);
char	*ft_gnl_prepare_string(int fd, int bytes_read, \
char *rtn_str, char **tmpstr);
/*
	printf functions
*/
int		ft_numlen_base(unsigned long n, int base);
char	*ft_itoa_base(char *str, unsigned long n, int base, int c);
int		ft_numlen(long n);
int		ft_putnbr_base(unsigned long n, char *base);
char	*ft_uitoa(unsigned int nb);

t_print	*ft_initialise_tab(t_print *tab);
int		ft_check_arg_type(t_print *tab, const char *format, int pos);
int		ft_printf(const char *format, ...);
void	ft_print_unsigned_int(t_print *tab);
void	ft_print_int(t_print *tab);
void	ft_print_hexa_int(t_print *tab, int c);
void	ft_print_char(t_print *tab);
void	ft_print_string(t_print *tab);
void	ft_print_pointer(t_print *tab);
void	ft_print_percentage(t_print *tab);
char	*ft_convert(int n, int digit_len, int is_neg);
void	ft_write_zero(t_print *tab);

#endif
