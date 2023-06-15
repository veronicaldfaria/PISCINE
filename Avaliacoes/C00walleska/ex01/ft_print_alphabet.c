/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wfelix-p <wfelix-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 18:51:28 by wfelix-p          #+#    #+#             */
/*   Updated: 2023/06/07 21:18:44 by wfelix-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	starts;

	starts = 'a';
	while (starts <= 'z')
	{
		write(1, &starts, 1);
		starts++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// 	return (0);
// }
