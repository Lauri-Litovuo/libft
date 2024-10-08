/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:02:06 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:04:40 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct s_vec
{
	unsigned char	*memory;
	size_t			elem_size;
	size_t			alloc_size;
	size_t			len;
}		t_vec;

/*******************************/
/*       libft functions       */
/*******************************/

int		ft_isalpha(int a);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
void	ft_bzero(void *s, size_t n);
void	*ft_memset(void *ptr, int c, size_t len);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *a);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
int		ft_atoi(const char *str);
void	ft_putstr_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putchar_fd(char c, int fd);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t ln);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
char	*ft_itoa(int n);
char	**ft_split(char const *s, char c);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));

/*******************************/
/*       printf functions      */
/*******************************/

int		ft_putchar(char c, int wlen);
int		ft_putstr(char *str, int wlen);
int		ft_putnbr_base(long int nbr, int *wlen, int base, char *base_symbols);
int		ft_putptr(unsigned long long nbr, int *wlen, int base, char *b_symb);
int		ft_printf(const char *str, ...);

/*******************************/
/*   get_next_line functions   */
/*******************************/

char	*get_next_line(int fd);
char	*read_file(int fd, char *mix_bin);
char	*save_residual(char	*mix_bin, char *residual);
char	*extract_line(char *mix_bin, char *line);

size_t	ft_strlen_gnl(char *a);
char	*ft_strchr_gnl(char *s, int c);
size_t	ft_strlcpy_gnl(char *dst, char *src, size_t dstsize);
size_t	ft_strlcat_gnl(char *dst, char *src, size_t dstsize);
char	*ft_strjoin_gnl(char *s1, char *s2);

/*******************************/
/*   	vec_lib functions 	   */
/*******************************/
int		vec_new(t_vec *dst, size_t init_len, size_t elem_size);
void	vec_free(t_vec *src);
int		vec_from(t_vec *dst, void *src, size_t len, size_t elem_size);
int		vec_resize(t_vec *src, size_t target_len);
int		vec_push(t_vec *src, void *elem);
int		vec_pop(void *dst, t_vec *src);
int		vec_copy(t_vec *dst, t_vec *src);
void	*vec_get(t_vec *src, size_t index);
int		vec_insert(t_vec *dst, void *elem, size_t index);
int		vec_remove(t_vec *src, size_t index);
int		vec_append(t_vec *dst, t_vec *src);
int		vec_prepend(t_vec *dst, t_vec *src);
void	vec_iter(t_vec *src, void (*f) (void *));
void	vec_free_str(t_vec *src);
int		vec_remove_str(t_vec *src, size_t index);
int		vec_replace_one(t_vec *dst, void *src, size_t index); //change
int		vec_replace_str(t_vec *dst, void *src, size_t index);
void	vec_sort_alpha(t_vec *src);
int		vec_copy_len(t_vec *dst, t_vec *src);



#endif
