#include "libft.h"

void  *ft_memset(void *s, int c, size_t n)
{
  size_t i;
  i = 0;
  unsigned char *dest =(unsigned char *)s;

  while (i < n)
    dest[i++] = (unsigned char)c;
  return s;
}
