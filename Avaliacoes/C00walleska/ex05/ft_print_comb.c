/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 17:36:05 by wfelix-p          #+#    #+#             */
/*   Updated: 2023/06/10 17:16:18 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_resul(char hun, char ten, char uni)
{
	write(1, &hun, 1);
	write(1, &ten, 1);
	write(1, &uni, 1);
	if (!(hun == '7' && ten == '8' && uni == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb(void)
{
	char	hun;
	char	ten;
	char	uni;

	hun = '0';
	ten = '1';
	uni = '2';
	while (hun <= '7')
	{
		ten = hun + 1;
		while (ten <= '8')
		{
			uni = ten + 1;
			while (uni <= '9')
			{
				ft_print_resul(hun, ten, uni);
				uni++;
			}
		ten++;
		}
	hun++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
