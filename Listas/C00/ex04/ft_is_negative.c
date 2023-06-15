/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 18:22:57 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/15 13:02:41 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

// int	main(void)
// {
// 	int	n;

// 	ft_is_negative(-1);
// 	ft_is_negative(10);
// 	ft_is_negative(102292);
// 	ft_is_negative(n);
// 	return (0);
// }