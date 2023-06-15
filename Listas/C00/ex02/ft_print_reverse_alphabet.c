/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:40:51 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/15 13:02:17 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	count;

	count = 'z';
	while (count >= 'a')
	{
		write(1, &count, 1);
		count--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }