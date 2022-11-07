/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 12:35:58 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/07 16:23:53 by ccosta-c         ###   ########.fr       */
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
char	textmemset[] = "TESTESTESTEST";
char	symbolmemset = '*';
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
printf("%s%s\n", "My Version - ", ft_memset(&textmemset, symbolmemset, 3));
printf("%s%s\n", "System Version - ", ((char*)memset(&textmemset, symbolmemset, 3)));
}