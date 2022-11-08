/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:35:58 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/08 15:29:42 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <string.h>

int main (void)
{
char	alphabetic = 'c';
char	digit = '4';
char	alphanumeric = 'x';
char	ascii = '.';
char	print = '!';
char	stringlength[] = "1234567890";
//-------------------------------------
char	textmemset[] = "TESTESTESTEST";
char	symbolmemset = '*';
//-------------------------------------
char	textbzero[] = "";
//-------------------------------------
char	memcpysrc[] = "Hello";
char	memcpydest[] = "Why would";
//-------------------------------------
char	memmovesrc[] = "111111111111111111111";
char	memmovedest[] = "This is a long phrase";

//isalpha
printf("%s\n%s%c\n", "------------------------------", "isalpha - ", alphabetic);
printf("%s%d\n", "My Version - ", ft_isalpha(alphabetic));
printf("%s%d\n", "System Version - ", isalpha(alphabetic));
//isdigit
printf("%s\n%s%c\n", "------------------------------", "isdigit - ", digit);
printf("%s%d\n", "My Version - ", ft_isdigit(digit));
printf("%s%d\n", "System Version - ", isdigit(digit));
//isalnum
printf("%s\n%s%c\n", "------------------------------", "isalnum - ", alphanumeric);
printf("%s%d\n", "My Version - ", ft_isalnum(alphanumeric));
printf("%s%d\n", "System Version - ", isalnum(alphanumeric));
//isascii
printf("%s\n%s%c\n", "------------------------------", "isascii - ", ascii);
printf("%s%d\n", "My Version - ", ft_isascii(ascii));
printf("%s%d\n", "System Version - ", isascii(ascii));
//isprint
printf("%s\n%s%c\n", "------------------------------", "isprint - ", print);
printf("%s%d\n", "My Version - ", ft_isprint(print));
printf("%s%d\n", "System Version - ", isprint(print));
//strlen
printf("%s\n%s%s\n", "------------------------------", "strlen - ", stringlength);
printf("%s%lu\n", "My Version - ", ft_strlen(stringlength));
printf("%s%lu\n", "System Version - ", strlen(stringlength));
//memset
printf("%s\n%s%s\n", "------------------------------", "memset - ", textmemset);
printf("%s%s\n", "My Version - ", ((char*)ft_memset(&textmemset, symbolmemset, 4)));
printf("%s%s\n", "System Version - ", ((char*)memset(&textmemset, symbolmemset, 4)));
//bzero
printf("%s\n%s%s\n", "------------------------------", "bzero - ", textbzero);
printf("%s", "My Version     - ");
int	i = 0;
ft_bzero(textbzero, 1);
while (i < 0)
{
	printf("%d ", textbzero[i]);
	i++;
}
printf("\n%s\n", "System Version - ");
i = 0;
bzero(textbzero, 1);
while (i < 0)
{
	printf("%d ", textbzero[i]);
	i++;
}
//memcpy
printf("%s\n%s%s / %s\n", "------------------------------", "memcpy - ", memcpydest, memcpysrc);
printf("%s%s\n", "My Version - ", ((char*)ft_memcpy(&memcpydest, &memcpysrc, 6)));
printf("%s%s\n", "System Version - ", ((char*)memcpy(&memcpydest, &memcpysrc, 6)));
//memmove
printf("%s\n%s%s / %s\n", "------------------------------", "memmove - ", memmovedest, memmovesrc);
printf("%s%s\n", "My Version - ", ((char*)ft_memmove(&memmovedest, &memmovesrc, 23)));
printf("%s%s\n", "System Version - ", ((char*)memmove(&memmovedest, &memmovesrc, 23)));
}
