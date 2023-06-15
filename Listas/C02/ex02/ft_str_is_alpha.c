/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 17:09:25 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/13 19:42:38 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
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

//     result = ft_str_is_alpha("abc");
//     printf("Result: %d\n", result);

//     result = ft_str_is_alpha("DANCE");
//     printf("Result: %d\n", result);

//     result = ft_str_is_alpha("\n");
//     printf("Result: %d\n", result);

//     result = ft_str_is_alpha("999");
//     printf("Result: %d\n", result);

//     result = ft_str_is_alpha("");
//     printf("Result: %d\n", result);

//     return (0);
// }