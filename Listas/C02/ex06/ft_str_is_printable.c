/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 18:43:09 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/13 19:43:39 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
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

//     result = ft_str_is_printable("abc");
//     printf("Result: %d\n", result);

//     result = ft_str_is_printable("DANCE");
//     printf("Result: %d\n", result);

//     result = ft_str_is_printable("\n");
//     printf("Result: %d\n", result);

//     result = ft_str_is_printable("999");
//     printf("Result: %d\n", result);

//     result = ft_str_is_printable("");
//     printf("Result: %d\n", result);

//     return (0);
// }