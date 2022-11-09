/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:35:58 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/09 11:30:50 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <bsd/string.h>
#include <stdio.h>

int main (void)
{
char	alphabetic = 'c';
char	digit = '4';
char	alphanumeric = '!';
char	ascii = '.';
char	print = '!';
char	stringlength[] = "1234567890";
//-------------------------------------
char	textmemset[] = "TESTESTESTEST";
char	symbolmemset = '*';
int	sizememset = 5;
//-------------------------------------
char	textbzero[] = "testbitch";
int	sizebzero = 5;
int	sizestring = 10;
//-------------------------------------
char	memcpysrc[] = "Hello";
char	memcpydest[] = "Why would";
int	sizememcpy = 6;
//-------------------------------------
char	memmovesrc[] = "111111111111111111111";
char	memmovedest[] = "This is a long phrase";
int	sizememmove = 10;
//-------------------------------------
char	strlcpysrc[] = "11111111111111111111";
char	strlcpydest[] = "This is a long phrase";
int	sizestrlcpy = 15;

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
}
