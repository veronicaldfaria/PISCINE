/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:38:35 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/15 13:44:52 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

// #include <stdio.h>

// int    main(void)
// {
//     char    string_1[] = "sky is ";
//     char    string_2[] = "purple";

//     printf("ft_strcat: = %s\n", ft_strcat(string_1, string_2));
//     return (0);
// }