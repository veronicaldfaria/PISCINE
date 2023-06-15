/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 10:00:03 by dfrade            #+#    #+#             */
/*   Updated: 2023/06/14 14:21:37 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (i < n))
	{
		if (!(s1[i] == s2[i]))
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>

int    main(void)
{
    char    string_1[] = "blue sky";
    char    string_2[] = "purple sky";
    char    string_3[] = "bl";
    printf("string_1 & strin_2  = %d\n", ft_strncmp(string_1, string_2, 2));
    printf("string_1 & string_3 = %d\n", ft_strncmp(string_1, string_3, 6));
    printf("string_1 & strin_2  = %d\n", strncmp(string_1, string_2, 2));
    printf("string_1 & string_3 = %d\n", strncmp(string_1, string_3, 6));
    return (0);
}

/*
DESCRIPTION:
The  strcmp()  function compares the two strings s1 and s2.  The locale
is not taken into account (for  a  locale-aware  comparison,  see  str‐
coll(3)).   It  returns an integer less than, equal to, or greater than
zero if s1 is found, respectively, to be less than,  to  match,  or  be
greater than s2.
The  strncmp()  function  is similar, except it compares only the first
(at most) n bytes of s1 and s2.
int strcmp(const char *s1, const char *s2);
SYNOPSIS:
int strcmp(const char *s1, const char *s2);
int strncmp(const char *s1, const char *s2, size_t n);
*/
