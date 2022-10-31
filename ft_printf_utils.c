#include "ft_printf.h"

int ft_puthex_lo_fd(const unsigned int number, int fd)
{
  char *dictionary;
  int count;

  count = 0;
  dictionary = "0123456789abcdef";

  if (number > 15 )
    count += ft_puthex_lo_fd(number / 16, fd);
  count += ft_putchar_fd(dictionary[number % 16], fd); 
  return (count); 
}

int ft_puthex_up_fd(const unsigned int number, int fd)
{
  char *dictionary;
  int count;

  count = 0;
  dictionary = "0123456789ABCDEF";

   if (number > 15 )
     count += ft_puthex_lo_fd(number / 16, fd);
   count += ft_putchar_fd(dictionary[number % 16], fd); 
   return (count); 
}

int ft_putunsigned_fd(const unsigned int number, int fd)
{
  return (ft_putnbr_fd(number, fd));
}

int ft_putptr_fd(const void *pointer, int fd)
{
  int count;
  int digits;
  unsigned long int address;
  char *dictionary;
  char hexaddress[17];

  dictionary = "0123456789abcdef";
  write(fd, "0x", 2);
  address = (unsigned long int)pointer;
  count = 2;
  digits = 0;
  while (address > 15 && digits < 17)
  {
    hexaddress[digits++] = dictionary[address % 16]; 
    address /= 16;
  }
  hexaddress[digits] = dictionary[address % 16];
  while (digits >= 0)
    count += ft_putchar_fd(hexaddress[digits--], fd);
  return (count);
}

