#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

/***********************
 * FUNCTION DECLARATIONS
 ***********************/

// printing //
void		ft_putchar(int c);
void		ft_putstr(char const *str);
void		ft_putnbr(int n);
int			ft_putnbr_base(unsigned long long n, int base, int is_upper);
void		ft_putstr_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putchar_fd(char c, int fd);

// memory //
void		*ft_memset(void *s, int c, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
void		ft_bzero(void	*s, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_calloc(size_t count, size_t size);

// string //
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *s);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strncpy(char *dst, const char *src, size_t n);
char		*ft_strndup(const char *s, size_t n);
char		*ft_strtrim(char const *s1, char const *set);
int 		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
char		*ft_strnstr(const char *s1, char *s2, size_t n);

// numbers //
int			ft_atoi(const char *str);
char		*ft_itoi(int n);

// character //
int			ft_isalpha(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isdigit(int c);
int			ft_isprint(int c);
int			ft_tolower(int c);
int			ft_toupper(int c);
int			ft_isupper(int c);
int			ft_islower(int c);
int			ft_isspace(int c);

#endif
