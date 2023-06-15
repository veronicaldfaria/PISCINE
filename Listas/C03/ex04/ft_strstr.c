/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/15 13:43:10 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/15 13:45:21 by vlima-de         ###   ########.fr       */
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

// #include <stdio.h>

// int	main(void) 
// {
// 	char	str[] = "Let's find somethig!";
// 	char	to_find[] = "t";

// 	printf("%s\n", ft_strstr(str, to_find));
// 	return(0);
// }