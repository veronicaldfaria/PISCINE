/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:41:15 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/15 13:45:02 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while ((src[j] != '\0') & (j < nb))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

// #include <stdio.h>

// int    main(void)
// {
//     char    string_1[] = "sky is ";
//     char    string_2[] = "purple";

//     printf("ft_strncat: = %s\n", ft_strncat(string_1, string_2, 3));
//     return (0);
// }