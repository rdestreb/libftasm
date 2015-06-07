#include <stdio.h>
#include <unistd.h>
#include <stdlib>
#include <ctype.h>
#include "libfts"

int	test_bzero();
int	test_strcat();
int	test_isalpha();
int	test_isdigit();
int	test_isalnum();
int	test_isascii();
int	test_isprint();
int	test_toupper();
int	test_tolower();
int	test_strlen();
int	test_memcpy();
int	test_memset();
int	test_puts();
int	test_strdup();

int	main()
{
  test_bzero();
  getchar();
  test_strcat();
  getchar();
  test_isalpha();
  getchar();
  test_isdigit();
  getchar();
  test_isalnum();
  getchar();
  test_isascii();
  getchar();
  test_isprint();
  getchar();
  test_toupper();
  getchar();
  test_tolower();
  getchar();
  test_strlen();
  getchar();
  test_memcpy();
  getchar();
  test_memset();
  getchar();
  test_puts();
  getchar();
  test_strdup();
  getchar();
  return (0)
}

int	test_bzero()
{
  return (0);
}

int	test_strcat()
{
  return (0);
}

int	test_isalpha()
{
  printf("__TEST ISALPHA__\n");
  printf("%s %d\n", "Libc  : ", isalpha('a'));
  printf("%s %d\n\n", "Libft : ", ft_isalpha('a'));
  printf("%s %d\n", "Libc  : ", isalpha('A'));
  printf("%s %d\n\n", "Libft : ", ft_isalpha('A'));
  printf("%s %d\n", "Libc  : ", isalpha(66));
  printf("%s %d\n\n", "Libft : ", ft_isalpha(66));
  printf("%s %d\n", "Libc  : ", isalpha('z'));
  printf("%s %d\n\n", "Libft : ", ft_isalpha('z'));
  printf("%s %d\n", "Libc  : ", isalpha('Z'));
  printf("%s %d\n\n", "Libft : ", ft_isalpha('Z'));
  printf("%s %d\n", "Libc  : ", isalpha('5'));
  printf("%s %d\n\n", "Libft : ", ft_isalpha('5'));
  printf("%s %d\n", "Libc  : ", isalpha('}'));
  printf("%s %d\n\n", "Libft : ", ft_isalpha('}'));
  return (0);
}
  
int	test_isdigit()
{
  return (0);
}
  
int	test_isalnum()
{
  return (0);
}

int	test_isascii()
{
  return (0);
}

int	test_isprint()
{
  return (0);
}

int	test_toupper()
{
  return (0);
}

int	test_tolower()
{
  return (0);
}

int	test_strlen()
{
  return (0);
}

int	test_memcpy()
{
  return (0);
}

int	test_memset()
{
  return (0);
}

int	test_puts()
{
  char test[20]="coucou";

  puts(test);
  ft_puts(test);
  return (0);
}

int	test_strdup()
{
  return (0);
}
