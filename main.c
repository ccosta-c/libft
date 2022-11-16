/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:35:58 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/16 14:34:46 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <bsd/string.h>

int main (void)
{
char	alphabetic = 'c';
char	digit = '4';
char	alphanumeric = '!';
char	ascii = '.';
char	print = '!';
char	stringlength[] = "1234567890";
//---------------memset----------------
char	textmemset[] = "TESTESTESTEST";
char	symbolmemset = '*';
size_t	sizememset = 5;
//---------------bzero-----------------
char	textbzero[] = "testbitch";
size_t	sizebzero = 5;
int		sizestring = 10;
//---------------memcpy-----------------
char	memcpysrc[] = "Hello";
char	memcpydest[] = "Why would";
size_t	sizememcpy = 6;
//---------------memmove----------------
char	memmovesrc[] = "111111111111111111111";
char	memmovedest[] = "This is a long phrase";
size_t	sizememmove = 10;
//---------------strlcpy-----------------
char	strlcpysrc[] = "11111111111111111111";
char	strlcpydest[] = "This is a long phrase";
size_t	sizestrlcpy = 15;
//---------------strlcat-----------------
char	strlcatsrc[] = "123456789";
char	strlcatsrc1[] = "123456789";
char	strlcatdest[] = "abcdefghi";
char	strlcatdest1[] = "abcdefghi";
size_t	sizestrlcat = 0;
//---------------toupper-----------------
char	touppercase = 'a';
//---------------tolower-----------------
char	tolowercase = 'A';
//----------------strchr-----------------
char	textstrchr[] = "Hello";
char	chrstrchr = 'l';
//---------------strrchr-----------------
char	textstrrchr[] = "Hello";
char	chrstrrchr = 'l';
//---------------strncmp-----------------
char	s1strncmp[] = "";
char	s2strncmp[] = "";
size_t	nstrncmp = 1;
//----------------memchr-----------------
char	textmemchr[] = "Hello";
char	chrmemchr = 'c';
size_t	sizememchr = 1;
//----------------memcmp-----------------
char	s1memcmp[] = "Hello";
char	s2memcmp[] = "HellO";
size_t	nmemcmp = 1;
//----------------strnstr-----------------
char	bigstrnstr[] = "i am awesome";
char	littlestrnstr[] = "aw";
size_t	nstrnstr = 10;
//----------------atoi-----------------
char	atoistr[] = "    -+1739249";
//----------------calloc-----------------
size_t	sizecalloc = 30;
//----------------strdup-----------------
char	textstrdup[] = "Hello World!";
//----------------substr-----------------
char	textsubstr[] = "Hello World!";
size_t	lensubstr = 5;
unsigned int	startsubstr = 6;
//----------------strjoin-----------------
char	textstrjoin[] = "Hello";
char	textstrjoin1[] = "World!";
//----------------strtrim-----------------
char	textstrtrim[] = "Hello World!";
char	setstrtrim[] = "Hello";

//isalpha
printf("------------------------------\nisalpha - \"%c\"\n", alphabetic);
printf("My Version - %d\n", ft_isalpha(alphabetic));
printf("System Version - %d\n", isalpha(alphabetic));
//isdigit
printf("------------------------------\nisdigit - \"%d\"\n", digit);
printf("My Version - %d\n", ft_isdigit(digit));
printf("System Version - %d\n", isdigit(digit));
//isalnum
printf("------------------------------\nisalnum - \"%c\"\n", alphanumeric);
printf("My Version - %d\n", ft_isalnum(alphanumeric));
printf("System Version - %d\n", isalnum(alphanumeric));
//isascii
printf("------------------------------\nisascii - \"%c\"\n", ascii);
printf("My Version - %d\n", ft_isascii(ascii));
printf("System Version - %d\n", isascii(ascii));
//isprint
printf("------------------------------\nisprint - \"%c\"\n", print);
printf("My Version - %d\n", ft_isprint(print));
printf("System Version - %d\n", isprint(print));
//strlen
printf("------------------------------\nstrlen - \"%s\"\n", stringlength);
printf("My Version - %lu\n", ft_strlen(stringlength));
printf("System Version - %lu\n", strlen(stringlength));
//memset
printf("------------------------------\nmemset - STRING \"%s\" AND SIZE \"%zu\"\n", textmemset, sizememset);
printf("My Version - %s\n", ((char*)ft_memset(&textmemset, symbolmemset, sizememset)));
printf("System Version - %s\n", ((char*)memset(&textmemset, symbolmemset, sizememset)));
//bzero
printf("------------------------------\nbzero - STRING \"%s\" AND SIZE \"%zu\"\n", textbzero, sizebzero);
printf("My Version     - ");
int	i = 0;
ft_bzero(textbzero, sizebzero);
while (i < sizestring)
{
	printf("%d ", textbzero[i]);
	i++;
}
printf("\nSystem Version - ");
i = 0;
bzero(textbzero, sizebzero);
while (i < sizestring)
{
	printf("%d ", textbzero[i]);
	i++;
}
//memcpy
printf("\n------------------------------\nmemcpy - DESTINATION \"%s\" SOURCE \"%s\" AND SIZE \"%zu\"\n", memcpydest, memcpysrc, sizememcpy);
printf("My Version - %s\n", ((char*)ft_memcpy(&memcpydest, &memcpysrc, sizememcpy)));
printf("System Version - %s\n", ((char*)memcpy(&memcpydest, &memcpysrc, sizememcpy)));
//memmove
printf("------------------------------\nmemmove - DESTINATION \"%s\" SOURCE \"%s\" AND SIZE \"%zu\"\n", memmovedest, memmovesrc, sizememmove);
printf("%s%s\n", "My Version - ", ((char*)ft_memmove(&memmovedest, &memmovesrc, sizememmove)));
printf("%s%s\n", "System Version - ", ((char*)memmove(&memmovedest, &memmovesrc, sizememmove)));
//strlcpy
printf("------------------------------\nstrlcpy - DESTINATION \"%s\" SOURCE \"%s\" AND SIZE \"%zu\"\n", strlcpydest, strlcpysrc, sizestrlcpy);
printf("My Version - %lu\n", ft_strlcpy(strlcpydest, strlcpysrc, sizestrlcpy));
printf("System Version - %lu\n", strlcpy(strlcpydest, strlcpysrc, sizestrlcpy));
//strlcat
printf("------------------------------\nstrlcat - DESTINATION \"%s\" SOURCE \"%s\" AND SIZE \"%zu\"\n", strlcatdest, strlcatsrc, sizestrlcat);
printf("My Version - %lu\n%s\n", ft_strlcat(strlcatdest, strlcatsrc, sizestrlcat), strlcatdest);
printf("System Version - %lu\n%s\n", strlcat(strlcatdest1, strlcatsrc1, sizestrlcat), strlcatdest1);
//toupper
printf("------------------------------\ntoupper - \"%c\"\n", touppercase);
printf("My Version - %c\n", ft_toupper(touppercase));
printf("System Version - %c\n", toupper(touppercase));
//tolower
printf("------------------------------\ntolower - \"%c\"\n", tolowercase);
printf("My Version - %c\n", ft_tolower(tolowercase));
printf("System Version - %c\n", tolower(tolowercase));
//strchr
printf("------------------------------\nstrchr - STRING \"%s\" SEARCHING FOR \"%c\"\n", textstrchr, chrstrchr);
printf("My Version - %s\n", (ft_strchr(textstrchr, chrstrchr)));
printf("System Version - %s\n", (strchr(textstrchr, chrstrchr)));
//strrchr
printf("------------------------------\nstrrchr - STRING \"%s\" SEARCHING FOR \"%c\"\n", textstrrchr, chrstrrchr);
printf("My Version - %s\n", (ft_strrchr(textstrrchr, chrstrrchr)));
printf("System Version - %s\n", (strrchr(textstrrchr, chrstrrchr)));
//strncmp
printf("------------------------------\nstrncmp - STRING1 \"%s\" STRING2 \"%s\" COMPARING UP TO \"%zu\"\n", s1strncmp, s2strncmp, nstrncmp);
printf("My Version - %d\n", ft_strncmp(s1strncmp, s2strncmp, nstrncmp));
printf("System Version - %d\n", strncmp(s1strncmp, s2strncmp, nstrncmp));
//memchr
printf("------------------------------\nmemchr - STRING \"%s\" SEARCHING FOR \"%c\" UP TO \"%zu\" BYTES\n", textmemchr, chrmemchr, sizememchr);
printf("My Version - %s\n", ((char *)ft_memchr(textmemchr, chrmemchr, sizememchr)));
printf("System Version - %s\n", ((char *)memchr(textmemchr, chrmemchr, sizememchr)));
//memcmp
printf("------------------------------\nmemcmp - STRING \"%s\" STRING2 \"%s\" COMPARING UP TO \"%zu\" BYTES\n", s1memcmp, s2memcmp, nmemcmp);
printf("My Version - %d\n", (ft_memcmp(s1memcmp, s2memcmp, nmemcmp)));
printf("System Version - %d\n", (memcmp(s1memcmp, s2memcmp, nmemcmp)));
//strnstr
printf("------------------------------\nstrnstr - SEARCHING FOR \"%s\" IN \"%s\" UP TO THE \"%zu\" POSITION\n", littlestrnstr, bigstrnstr, nstrnstr);
printf("My Version - %s\n", (ft_strnstr(bigstrnstr, littlestrnstr, nstrnstr)));
printf("System Version - %s\n", (strnstr(bigstrnstr, littlestrnstr, nstrnstr)));
//atoi
printf("------------------------------\natoi - \"%s\"\n", atoistr);
printf("My Version - %d\n", ft_atoi(atoistr));
printf("System Version - %d\n", atoi(atoistr));
//calloc
printf("------------------------------\ncalloc - ALLOCATING \"%zu\" BYTES\n", sizecalloc);
	char *dest1;
	char *dest2;

	dest1 = (char *)calloc(sizecalloc, 1);
	printf("dst >> %s \n", dest1);
	dest2 = (char *)ft_calloc(sizecalloc, 1);
	printf("dst2 >> %s \n", dest2);
//strdup
printf("------------------------------\nstrdup - \"%s\"\n", textstrdup);
printf("My Version - %s\n", ft_strdup(textstrdup));
printf("System Version - %s\n", strdup(textstrdup));
//substr
printf("------------------------------\nsubstr - \"%s\" FROM \"%d\" UP TO \"%zu\"\n", textsubstr, startsubstr, lensubstr);
printf("My Version - %s\n", ft_substr(textsubstr, startsubstr, lensubstr));
//strjoin
printf("------------------------------\nstrjoin - \"%s\" AND \"%s\"\n", textstrjoin, textstrjoin1);
printf("My Version - %s\n", ft_strjoin(textstrjoin, textstrjoin1));
//strtrim
printf("------------------------------\nstrtrim - \"%s\" REMOVE \"%s\"\n", textstrtrim, setstrtrim);
printf("My Version - %s\n", ft_strtrim(textstrtrim, setstrtrim));
}