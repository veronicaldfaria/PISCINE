/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:18:46 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/15 13:04:22 by vlima-de         ###   ########.fr       */
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
// 	char phrase[100] = "yeah whatever dog";
// 	int length;

// 	length = ft_strlen(phrase);

// 	printf("The length is: %d", length);
// 	return (0);
// }