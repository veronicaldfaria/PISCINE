/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 10:59:21 by madougla          #+#    #+#             */
/*   Updated: 2023/06/10 13:11:04 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' & j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

void test_strncat(char *dest, char *src, unsigned int nb)
{
	char a[1000];
	char b[1000];
	strcpy(a, dest);
	strcpy(b, src);
	printf("ft_strncat(str1, str2, nb) = %s\n", ft_strncat(dest, src, nb));
	printf("strncat(str1, str2, nb) = %s\n", strncat(a, b, nb));
}
int main(void) {
	char dest[] = "abc";
	char src[] = "xyzwrt";
	test_strncat(dest, src, 3);
	return 0;
}