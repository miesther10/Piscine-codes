/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 02:28:55 by emouity           #+#    #+#             */
/*   Updated: 2026/02/13 03:46:08 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_any(char **tab, int (*f)(char*))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]) != 0)
			return (1);
		i++;
	}
	return (0);
}

/*int	text(char *test)
{
	int	i;
	
	i = 0;
	while (test[i] != '\0')
	{
		if (test[i] == 'a')
			return (1);
		i++;
	}
	return (0);
}

int	main (void)
{
	char *test[] ={"bonjour","ujourd'hui","slut", NULL};

	int  result = ft_any(test, text);

	printf("%d", result);
	return (0);
}*/
