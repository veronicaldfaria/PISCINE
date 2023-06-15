/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:15:57 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/12 12:47:13 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a;
	mod = *b;
	if (b != 0)
	{
		*a = div / mod;
		*b = div % mod;
	}
}

// #include <stdio.h>

// int main()
// {
// 	int a;
// 	int b;

// 	a = 20;
// 	b = 10;

// 	printf("a: %d, b: %d\n", a, b);
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("a: %d, b: %d\n", a, b);
// 	return (0);
// }