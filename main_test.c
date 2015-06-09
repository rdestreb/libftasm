/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rdestreb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/06/09 15:34:56 by rdestreb          #+#    #+#             */
/*   Updated: 2015/06/09 16:32:23 by rdestreb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <strings.h>
#include "libfts.h"

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
	return (0);
}

int	test_bzero()
{
	char test1[20] = "0123456789";
	char test2[20] = "0123456789";
	char test3[20] = "0123456789";
	int	i;

	printf("____TEST BZERO____\n\n");

	printf("ft_bzero('0123456789', 0)\n");
	ft_bzero(test3, 0);
	i = -1;
	while (++i < 10)
		printf("[%d] ", test3[i]);

	printf("\n\nft_bzero('0123456789', 3)\n");
	ft_bzero(test1, 3);
	i = -1;
	while (++i < 10)
		printf("[%d] ", test1[i]);

	printf("\n\nft_bzero('0123456789', 12)\n");
	ft_bzero(test2, 12);
	i = -1;
	while (++i < 10)
		printf("[%d] ", test2[i]);
	return (0);
}

int	test_strcat()
{
	char  s0[50] = "test";
	char  s1[50] = "test";

	printf("\n____TEST STRCAT____\n");
	printf("\ntest + icule :\n");
	printf("%s %s\n", "Libc   : ", strcat(s0, "icule"));
	printf("%s %s\n\n", "LibAsm : ", ft_strcat(s1, "icule"));
	return (0);
}

int	test_isalpha()
{
	printf("\n____TEST ISALPHA____\n\n");
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
	printf("\n____TEST ISDIGIT____\n\n");
	printf("%s %d\n", "Libc  : ", isdigit('0'));
	printf("%s %d\n\n", "Libft : ", ft_isdigit('0'));
	printf("%s %d\n", "Libc  : ", isdigit('9'));
	printf("%s %d\n\n", "Libft : ", ft_isdigit('9'));
	printf("%s %d\n", "Libc  : ", isdigit('z'));
	printf("%s %d\n\n", "Libft : ", ft_isdigit('z'));
	printf("%s %d\n", "Libc  : ", isdigit('}'));
	printf("%s %d\n\n", "Libft : ", ft_isdigit('}'));
	printf("%s %d\n", "Libc  : ", isdigit(5));
	printf("%s %d\n\n", "Libft : ", ft_isdigit(5));
	printf("%s %d\n", "Libc  : ", isdigit(50));
	printf("%s %d\n\n", "Libft : ", ft_isdigit(50));
	return (0);
}

int	test_isalnum()
{
	printf("\n____TEST ISALNUM____\n\n");
	printf("%s %d\n", "Libc  : ", isalnum('a'));
	printf("%s %d\n\n", "Libft : ", ft_isalnum('a'));
	printf("%s %d\n", "Libc  : ", isalnum('Z'));
	printf("%s %d\n\n", "Libft : ", ft_isalnum('Z'));
	printf("%s %d\n", "Libc  : ", isalnum('5'));
	printf("%s %d\n\n", "Libft : ", ft_isalnum('5'));
	printf("%s %d\n", "Libc  : ", isalnum('}'));
	printf("%s %d\n\n", "Libft : ", ft_isalnum('}'));
	printf("%s %d\n", "Libc  : ", isalnum(' '));
	printf("%s %d\n\n", "Libft : ", ft_isalnum(' '));
	return (0);
}

int	test_isascii()
{
	printf("\n____TEST ISASCII____\n\n");
	printf("%s %d\n", "Libc  : ", isascii('a'));
	printf("%s %d\n\n", "Libft : ", ft_isascii('a'));
	printf("%s %d\n", "Libc  : ", isascii(66));
	printf("%s %d\n\n", "Libft : ", ft_isascii(66));
	printf("%s %d\n", "Libc  : ", isascii(' '));
	printf("%s %d\n\n", "Libft : ", ft_isascii(' '));
	printf("%s %d\n", "Libc  : ", isascii('5'));
	printf("%s %d\n\n", "Libft : ", ft_isascii('5'));
	printf("%s %d\n", "Libc  : ", isascii('}'));
	printf("%s %d\n\n", "Libft : ", ft_isascii('}'));
	return (0);
}


int	test_isprint()
{
	printf("\n____TEST ISPRINT____\n\n");
	printf("%s %d\n", "Libc  : ", isprint('a'));
	printf("%s %d\n\n", "Libft : ", ft_isprint('a'));
	printf("%s %d\n", "Libc  : ", isprint(66));
	printf("%s %d\n\n", "Libft : ", ft_isprint(66));
	printf("%s %d\n", "Libc  : ", isprint(' '));
	printf("%s %d\n\n", "Libft : ", ft_isprint(' '));
	printf("%s %d\n", "Libc  : ", isprint('5'));
	printf("%s %d\n\n", "Libft : ", ft_isprint('5'));
	return (0);
}

int	test_toupper()
{
	printf("\n____TEST TOUPPER____\n\n");
	printf("%s %d\n", "Libc  : ", toupper('a'));
	printf("%s %d\n\n", "Libft : ", ft_toupper('a'));
	printf("%s %d\n", "Libc  : ", toupper('z'));
	printf("%s %d\n\n", "Libft : ", ft_toupper('z'));
	printf("%s %d\n", "Libc  : ", toupper('A'));
	printf("%s %d\n\n", "Libft : ", ft_toupper('A'));
	printf("%s %d\n", "Libc  : ", toupper('0'));
	printf("%s %d\n\n", "Libft : ", ft_toupper('0'));
	printf("%s %d\n", "Libc  : ", toupper(115));
	printf("%s %d\n\n", "Libft : ", ft_toupper(115));
	return (0);
}

int	test_tolower()
{
	printf("\n____TEST TOLOWER____\n\n");
	printf("%s %d\n", "Libc  : ", tolower('A'));
	printf("%s %d\n\n", "Libft : ", ft_tolower('A'));
	printf("%s %d\n", "Libc  : ", tolower('Z'));
	printf("%s %d\n\n", "Libft : ", ft_tolower('Z'));
	printf("%s %d\n", "Libc  : ", tolower('a'));
	printf("%s %d\n\n", "Libft : ", ft_tolower('a'));
	printf("%s %d\n", "Libc  : ", tolower('&'));
	printf("%s %d\n\n", "Libft : ", ft_tolower('&'));
	printf("%s %d\n", "Libc  : ", tolower(82));
	printf("%s %d\n\n", "Libft : ", ft_tolower(82));
	return (0);
}

int	test_strlen()
{
	char  str[50] = "mon cul sur la commode";
	char  str2[50] = "";

	printf("\n____TEST STRLEN____\n\n");
	puts(str);
	printf("Libc  : %ld\n", strlen(str));
	printf("Libft : %ld\n",ft_strlen(str));
	printf("\nEmpty :\n");
	printf("Libc  : %ld\n", strlen(str2));
	printf("Libft : %ld\n",ft_strlen(str2));
	return (0);
}

int	test_memcpy()
{
	char src[20] = "test";
	char dst[20] = "titi";
	char src2[20] = "0123456789";
	char dst2[20] = "qwertyuiop";

	printf("\n____TEST MEMCPY____\n\n");
	printf("'test' into 'titi' (0 bytes) -> %s\n", ft_memcpy(dst, src, 0));
	printf("'test' into 'titi' (4 bytes) -> %s\n", ft_memcpy(dst, src, 4));
	printf("'0123456789' into 'qwertyuiop' (4 bytes) -> %s\n", ft_memcpy(dst2, src2, 4));
	return (0);
}

int	test_memset()
{
	char test[10] = "0123456789";
	char test2[10] = "0123456789";
	char test3[10] = "0123456789";
	int i;

	printf("\n____TEST MEMSET____\n\n");
	printf("memset('0123456789', 0, 5)\n");
	ft_memset(test, 0, 5);
	i = -1;
	while (++i < 10)
		printf("[%d] ", test[i]);

	printf("\n\nmemset('0123456789', 42, 10)\n");
	ft_memset(test2, 42, 10);
	i = -1;
	while (++i < 10)
		printf("[%d] ", test2[i]);

	printf("\n\nmemset('0123456789', 0, 0)\n");
	ft_memset(test3, 0, 0);
	i = -1;
	while (++i < 10)
		printf("[%d] ", test3[i]);
	return (0);
}

int	test_puts()
{
	char test[10] = "coucou";
	char *test0 = NULL;

	printf("\n____TEST PUTS____\n\n");
	puts("libc : ");
	puts(test);
	puts("\nlibasm : ");
	ft_puts(test);
	puts("\nlibc : ");
	puts(test0);
	puts("\nlibasm : ");
	ft_puts(test0);
	return (0);
}

int	test_strdup()
{
	char  test[50] = "wh;iughlieruqgq07yo37qytbvierytboieqybtwhqybpq0";
	char  test2[50] = "";

	puts("\n____TEST STRDUP____\n\n");
	printf("String : %s (%p)\n", test, test);
	printf("Libc   : %s (%p)\n", strdup(test), strdup(test));
	printf("LibAsm : %s (%p)\n", ft_strdup(test), ft_strdup(test));

	printf("\nString : %s (%p)\n", test2, test2);
	printf("Libc   : %s (%p)\n", strdup(test2), strdup(test2));
	printf("LibAsm : %s (%p)\n", ft_strdup(test2), ft_strdup(test2));
	return (0);
}

