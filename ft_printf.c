#include "libftprintf.h"

int ft_what_to_print(va_list content, const char identifier)
{
  if (identifier == 'c')
    return (ft_putchar_fd(va_arg(content, int), 1));
  else if (identifier == 'd')
    return (ft_putnbr_fd(va_arg(content, int), 1));
  else if (identifier == 's')
    return (ft_putstr_fd(va_arg(content, char *), 1));
  else if (identifier == 'p')
    return (ft_putptr_fd(va_arg(content, void *), 1));
  else if (identifier == 'u')
    return (ft_putunsigned_fd(va_arg(content, int), 1));
  else if (identifier == 'x')
    return (ft_puthex_lo_fd(va_arg(content, unsigned int), 1));
  else if (identifier == 'X')
    return (ft_puthex_up_fd(va_arg(content, unsigned int), 1));
  else if (identifier == 'i')
    return (ft_putnbr_fd(va_arg(content, int), 1));
  else
    return (0);
}

int ft_printf(const char *str, ...)
{
  va_list variables;
  void  *ptr;
  int charcount;

  charcount = 0;
  va_start(variables, str);
  while (*str != 0)
  {
    if (*str == '%')
    {
      if (*(++str) != '%')
        charcount += ft_what_to_print(variables, *str);
      else
        charcount += ft_putchar_fd(*str, 1); 
    }
    else
      charcount += ft_putchar_fd(*str, 1);
    str++;
  }
  va_end(variables);
  return (charcount);
}


