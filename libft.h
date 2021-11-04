#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <unistd.h>
# include <stdlib.h>

// printing //
void		ft_putchar(char c);
void		ft_putstr(char const *str);
int		ft_putnbr(int n);
int		ft_putnbr_base(unsigned long long n, int base, int is_upper);

// memory //
void		ft_memset(void *dest, const void *src, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);

// string //
char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		*ft_strlcat(char *dst, const char *src, size_t size);
size_t		ft_strlen(const char *s);

// numbers //
int		ft_atoi(const char *str);

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
