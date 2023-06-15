/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:29:25 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/13 19:43:18 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// #include <stdio.h>

// int main()
// {
//     int result;

//     result = ft_str_is_lowercase("abc");
//     printf("Result: %d\n", result);

//     result = ft_str_is_lowercase("DANCE");
//     printf("Result: %d\n", result);

//     result = ft_str_is_lowercase("\n");
//     printf("Result: %d\n", result);

//     result = ft_str_is_lowercase("999");
//     printf("Result: %d\n", result);

//     result = ft_str_is_lowercase("");
//     printf("Result: %d\n", result);

//     return (0);
// }