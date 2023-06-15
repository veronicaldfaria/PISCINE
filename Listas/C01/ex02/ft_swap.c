/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:13:01 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/12 12:40:02 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

// #include <stdio.h>

// int	main()
// {
// 	int i;
// 	int j;

// 	i = 42;
// 	j = 24;

// 	printf("Valor inicial de i: %d\n", i);
// 	printf("Valor inicial de j: %d\n", j);
// 	ft_swap(&i, &j);
// 	printf("Valor final de i: %d\n", i);
// 	printf("Valor final de j: %d\n", j);
// 	return (0);
// }