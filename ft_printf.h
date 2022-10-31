#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <limits.h>
# include <stdarg.h>
# include <stdlib.h>
# include <stdio.h>
# include "libft/libft.h"

int ft_printf(const char *str, ...);
int ft_what_to_print(va_list content, const char identifier);
int ft_puthex_up_fd(const unsigned int number, int fd);
int ft_puthex_lo_fd(const unsigned int number, int fd);
int ft_putptr_fd(const void *pointer, int fd);
int ft_putunsigned_fd(const unsigned int number, int fd);
#endif
