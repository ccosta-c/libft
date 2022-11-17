/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccosta-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:07:09 by ccosta-c          #+#    #+#             */
/*   Updated: 2022/11/17 13:29:12 by ccosta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
bzero - write zeroes to a byte string;
isalnum - test for any character for which isalpha or isdigit is true;
isalpha - test for an alphabetic character;
isdigit - test for a decimal digit character;
isascii - test for an ASCII character;
memcpy - copy memory area up to n bytes, not handle overlaps;
memmove - copy memory area up to n bytes, handles overlaps;
memset - fills the first n bytes of the memory area pointed to by s with the
	constant byte c;
strlen - calculate the length of a string;
strlcpy - copy string up to n bytes;
strlcat - concatenate string up to n bytes;
strtoupper - convert lowercase letter to uppercase;
strtolower - convert uppercase letter to lowercase;
strchr - locate character in string;
strrchr - locate last occurrence of character in string;
strncmp - compare strings up to n bytes;
memchr - locate byte in byte string;
memcmp - compare bytes in memory;
strnstr - locate a substring in a string up to n bytes;
atoi - convert ASCII string to integer;
calloc - allocate memory for an array;
strdup - duplicate a string;
substr - allocate and return a substring from the string ’s’, starting at 
	index ’start’ and of maximum size ’len’;
strjoin - concatenate ’s1’ and ’s2’;
strtrim - trim characters in the string ’set’ from the beginning and the end of
 	the string ’s1’;
itoa - convert an integer to a string;
*/

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_bzero(void *s, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
size_t	ft_strlen(const char *s);
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_atoi(const char *nptr);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(const char *s, char c);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

#endif
