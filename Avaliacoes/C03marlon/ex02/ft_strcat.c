/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 11:01:50 by madougla          #+#    #+#             */
/*   Updated: 2023/06/10 13:09:38 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

void test_strcat(char *dest, char *src)
{
	char a[1000];
	char b[1000];
	strcpy(a, dest);
	strcpy(b, src);
	printf("\nft_strcat(str1, str2) = %s\n", ft_strcat(dest, src));
	printf("strcat(str1, str2) = %s\n", strcat(a, b));
}
int main(void) {
	char dest[] = "abc";
	char src[] = "def";
	test_strcat(dest, src);
	return 0;
}