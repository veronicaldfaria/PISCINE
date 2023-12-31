/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 19:49:18 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/07 13:12:17 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b)
{
	int	other;

	other = *a;
	*a = *b;
	*b = other;
}

int	main()
{
	int i,j;

	i = 42;
	j = 24;

	printf("Antes - %d\n", i);
	printf("Antes - %d\n", j);

	ft_swap(&i, &j);

	printf("Depois - %d\n", i);
	printf("Depois - %d\n", j);
	
}
