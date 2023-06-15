/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:22:11 by luisanto          #+#    #+#             */
/*   Updated: 2023/06/07 13:23:17 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include <string.h>

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

#include<stdio.h>
int	main ()
{
	char phrase[100] = "yeah whatever dog";
	int length;
	
	length = ft_strlen(phrase);

	printf("The length is : %d", length);

	return 0;
}
