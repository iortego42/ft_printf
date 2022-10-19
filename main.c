#include "libftprintf.h"
#include <stdio.h>
int main()
{
  int *pointer;
  printf("%d %d", ft_printf("hola %c que tal %p", 'c', pointer), printf("hola %c que tal %p", 'c', pointer));
  return (0);
}
