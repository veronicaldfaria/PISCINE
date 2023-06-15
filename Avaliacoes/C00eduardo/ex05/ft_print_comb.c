/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:53:08 by eddos-sa          #+#    #+#             */
/*   Updated: 2023/06/05 12:16:14 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print(int i, int j, int k)
{
	ft_putchar(i);
	ft_putchar(j);
	ft_putchar(k);
	ft_putchar(',');
	ft_putchar(' ');
}

void	ft_print_comb(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '1';
	k = '2';
	while (i <= '7')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				ft_print(i, j, k);
				k++;
			}
			j++;
			k = j + 1;
		}
		i++;
		j = i;
		k = j + 1;
	}
}


int main(void)
{
	ft_print_comb();
	return(0);
}
