/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 18:35:52 by ralves-d          #+#    #+#             */
/*   Updated: 2023/06/11 18:59:22 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = 10;
	b = 5;
	ft_div_mod(a, b, &div, &mod);
	printf("Divisão: %d\n", div);
	printf("Resto: %d\n", mod);
	return (0);
}


void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
