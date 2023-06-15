/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:14:27 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/12 12:40:32 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	int a;
// 	int b;
// 	int mod;
// 	int div;

// 	a = 20;
// 	b = 10;

// 	printf("a: %d, b: %d\n", a, b);
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("a: %d, b: %d, div: %d, mod: %d\n", a, b, div, mod);
// 	return (0);
// }