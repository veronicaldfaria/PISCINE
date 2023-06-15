/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 12:14:12 by dfrade            #+#    #+#             */
/*   Updated: 2023/06/14 14:34:06 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}

#include <stdio.h>
#include <string.h>
int	main(void) 
{
	char	str[] = "Let's find somethig!";
	char	to_find[] = "t";
	printf("%s\n", ft_strstr(str, to_find));
	printf("%s\n", strstr(str, to_find));
	return(0);
}

/*
DESCRIPTION:
The  strstr() function finds the first occurrence of the substring nee‐
dle in the string haystack.  The terminating null bytes ('\0') are  not
compared.
This function return a pointer to the beginning of the  located  
sub‐string, or NULL if the substring is not found.
SYNOPSIS:
char *strstr(const char *haystack, const char *needle);
*/
// printf("%c\n", *ft_strstr(str, to_find));