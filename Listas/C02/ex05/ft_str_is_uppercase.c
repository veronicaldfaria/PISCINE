/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:36:48 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/13 19:43:29 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'A' || str[i] > 'Z')
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

//     result = ft_str_is_uppercase("abc");
//     printf("Result: %d\n", result);

//     result = ft_str_is_uppercase("DANCE");
//     printf("Result: %d\n", result);

//     result = ft_str_is_uppercase("\n");
//     printf("Result: %d\n", result);

//     result = ft_str_is_uppercase("999");
//     printf("Result: %d\n", result);

//     result = ft_str_is_uppercase("");
//     printf("Result: %d\n", result);

//     return (0);
// }