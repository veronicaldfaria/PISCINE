/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:34:14 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/15 13:44:33 by vlima-de         ###   ########.fr       */
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

// #include <stdio.h>

// int    main(void)
// {
//     char    string_1[] = "blue sky";
//     char    string_2[] = "purple sky";
//     char    string_3[] = "bl";

//     printf("string_1 & strin_2  = %d\n", ft_strncmp(string_1, string_2, 2));
//     printf("string_1 & string_3 = %d\n", ft_strncmp(string_1, string_3, 6));
//     return (0);
// }