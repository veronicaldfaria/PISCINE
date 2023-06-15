/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 14:42:48 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/15 13:08:34 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

// #include<stdio.h>

// int	main ()
// {
// 	char phrase[100] = "Qualquer coisa";
// 	int length;

// 	length = ft_strlen(phrase);

// 	printf("O comprimento é: %d", length);
// 	return (0);
// }