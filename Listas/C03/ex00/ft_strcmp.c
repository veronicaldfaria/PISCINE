/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlima-de <vlima-de@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/14 11:26:51 by vlima-de          #+#    #+#             */
/*   Updated: 2023/06/14 14:13:55 by vlima-de         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>

int	main(void)

	printf("%d\n", ft_strcmp("OLA", "OlA"));
	printf("%d\n", ft_strcmp("Veronica", "Vero"));
	printf("%d\n", ft_strcmp("Vero", "Veronica"));
	printf("%d\n", ft_strcmp("Veronica", "Veronica"));
    return (0);
