/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:16:30 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/12 13:05:45 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[100] = "Cmon, Mikey";
// 	char *p_str;

// 	p_str = str;

// 	ft_putstr(p_str);
// 	return (0);
// }