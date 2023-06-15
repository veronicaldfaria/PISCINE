/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/31 17:46:58 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/15 13:01:39 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	count;

	count = 'a';
	while (count <= 'z')
	{
		write(1, &count, 1);
		count++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }