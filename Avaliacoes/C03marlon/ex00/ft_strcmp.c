/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:46:24 by madougla          #+#    #+#             */
/*   Updated: 2023/06/14 11:44:06 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void test_strcmp(char *str1, char *str2)
{
	printf("\nft_strcmp(str1, str2) = %d\n", ft_strcmp(str1, str2));
	printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));
}
int main(void) {
	char str1[] = "abcd", str2[] = "abCd", str3[] = "abcd";
	int result;
	test_strcmp(str1, str2);
	test_strcmp(str1, str3);
	return 0;
}