/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdias <mdias@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 16:02:39 by mdias             #+#    #+#             */
/*   Updated: 2023/05/28 17:48:33 by mdias            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	l;
	int	k;				

	l = 1;
	while (l <= y && x > 0)
	{	
		k = 1;
		while (k <= x)
		{
			if ((k == 1 && l == 1) || (k == x && l == 1))
				ft_putchar('A');
			else if ((k == 1 && l == y) || (k == x && l == y))
				ft_putchar('C');
			else if ((k == 1) || (k == x) || (l == 1) || (l == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			k++;
		}
		ft_putchar('\n');
		l++;
	}
}
