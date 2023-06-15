/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:07:38 by madougla          #+#    #+#             */
/*   Updated: 2023/06/10 13:08:13 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] != '\0' && i < n)
	{
		if (!(s1[i] == s2[i]))
		{
			return (1);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}

void test_strcmp(char *str1, char *str2, unsigned int n)
{
	// comparing strings str1 and str2
	printf("\nft_strncmp(str1, str2, n) = %d\n", ft_strncmp(str1, str2, n));
	printf("strncmp(str1, str2, n) = %d\n", strncmp(str1, str2, n));
}

int main(void) {
	char str1[] = "inicio", str2[] = "insimigo", str3[] = "abcd";
	int result;

	test_strcmp(str1, str2, 3);
	test_strcmp(str1, str3, 3);

	return 0;
}