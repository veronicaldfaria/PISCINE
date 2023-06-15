/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 14:44:15 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/13 19:41:48 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	index;

	index = 0;
	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char src[] = "Cadete 2023";
// 	char dest[10];

// 	ft_strcpy(dest, src);
// 	printf("%s\n", dest);
// 	return (0);
// }