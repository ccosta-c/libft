/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:35:58 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/10 11:42:44 by ccosta-c         ###   ########.fr       */
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
int		sizememset = 5;
//---------------bzero-----------------
char	textbzero[] = "testbitch";
int		sizebzero = 5;
int		sizestring = 10;
//---------------memcpy-----------------
char	memcpysrc[] = "Hello";
char	memcpydest[] = "Why would";
int		sizememcpy = 6;
//---------------memmove----------------
char	memmovesrc[] = "111111111111111111111";
char	memmovedest[] = "This is a long phrase";
int		sizememmove = 10;
//---------------strlcpy-----------------
char	strlcpysrc[] = "11111111111111111111";
char	strlcpydest[] = "This is a long phrase";
int		sizestrlcpy = 15;
//---------------strlcat-----------------
char	strlcatsrc[] = "11111111111111111111";
char	strlcatdest[] = "This is a long phrase";
int		sizestrlcat = 15;
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
char	strncmps1[] = "";
char	strncmps2[] = "";
int		strncmpn = 100;

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
printf("------------------------------\nmemset - STRING \"%s\" AND SIZE \"%d\"\n", textmemset, sizememset);
printf("My Version - %s\n", ((char*)ft_memset(&textmemset, symbolmemset, sizememset)));
printf("System Version - %s\n", ((char*)memset(&textmemset, symbolmemset, sizememset)));
//bzero
printf("------------------------------\nbzero - STRING \"%s\" AND SIZE \"%d\"\n", textbzero, sizebzero);
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
printf("\n------------------------------\nmemcpy - DESTINATION \"%s\" SOURCE \"%s\" AND SIZE \"%d\"\n", memcpydest, memcpysrc, sizememcpy);
printf("My Version - %s\n", ((char*)ft_memcpy(&memcpydest, &memcpysrc, sizememcpy)));
printf("System Version - %s\n", ((char*)memcpy(&memcpydest, &memcpysrc, sizememcpy)));
//memmove
printf("------------------------------\nmemmove - DESTINATION \"%s\" SOURCE \"%s\" AND SIZE \"%d\"\n", memmovedest, memmovesrc, sizememmove);
printf("%s%s\n", "My Version - ", ((char*)ft_memmove(&memmovedest, &memmovesrc, sizememmove)));
printf("%s%s\n", "System Version - ", ((char*)memmove(&memmovedest, &memmovesrc, sizememmove)));
//strlcpy
printf("------------------------------\nstrlcpy - DESTINATION \"%s\" SOURCE \"%s\" AND SIZE \"%d\"\n", strlcpydest, strlcpysrc, sizestrlcpy);
printf("My Version - %lu\n", ft_strlcpy(strlcpydest, strlcpysrc, sizestrlcpy));
printf("System Version - %lu\n", strlcpy(strlcpydest, strlcpysrc, sizestrlcpy));
//strlcat
printf("------------------------------\nstrlcat - DESTINATION \"%s\" SOURCE \"%s\" AND SIZE \"%d\"\n", strlcatdest, strlcatsrc, sizestrlcat);
printf("My Version - %lu\n", ft_strlcat(strlcatdest, strlcatsrc, sizestrlcat));
printf("System Version - %lu\n", strlcat(strlcatdest, strlcatsrc, sizestrlcat));
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
printf("------------------------------\nstrncmp - STRING1 \"%s\" STRING2 \"%s\" COMPARING UP TO \"%d\"\n", strncmps1, strncmps2, strncmpn);
printf("My Version - %d\n", ft_strncmp(strncmps1, strncmps2, strncmpn));
printf("System Version - %d\n", strncmp(strncmps1, strncmps2, strncmpn));
}
