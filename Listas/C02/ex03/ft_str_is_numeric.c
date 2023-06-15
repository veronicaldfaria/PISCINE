/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:12:17 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/13 19:42:55 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
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

//     result = ft_str_is_numeric("abc");
//     printf("Result: %d\n", result);

//     result = ft_str_is_numeric("DANCE");
//     printf("Result: %d\n", result);

//     result = ft_str_is_numeric("\n");
//     printf("Result: %d\n", result);

//     result = ft_str_is_numeric("999");
//     printf("Result: %d\n", result);

//     result = ft_str_is_numeric("");
//     printf("Result: %d\n", result);

//     return (0);
// }