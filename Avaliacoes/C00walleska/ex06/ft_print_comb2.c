/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 13:09:36 by wfelix-p          #+#    #+#             */
/*   Updated: 2023/06/10 17:20:15 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_result(char tho, char hun, char ten, char uni);
void	ft_print_comb2(void);
void	ft_whil(char tho, char hun, char ten, char uni);

void	ft_print_result(char tho, char hun, char ten, char uni)
{
	write(1, &tho, 1);
	write(1, &hun, 1);
	write(1, " ", 1);
	write(1, &ten, 1);
	write(1, &uni, 1);
	if (!(tho == '9' && hun == '8' && ten == '9' && uni == '9'))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	char	tho;
	char	hun;
	char	ten;
	char	uni;

	tho = '0';
	hun = '0';
	ten = '0';
	uni = '1';
	ft_whil(tho, hun, ten, uni);
}

void	ft_whil(char tho, char hun, char ten, char uni)
{
	while (tho <= '9')
	{
		hun = '0';
		while (hun <= '8')
		{
			ten = '0';
			while (ten <= '9')
			{
				uni = hun + 1;
				while (uni <= '9')
				{
					ft_print_result(tho, hun, ten, uni);
					uni++;
				}
				ten++;
			}
			hun++;
		}
		tho++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
