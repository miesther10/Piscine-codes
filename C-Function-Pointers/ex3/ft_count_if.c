/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 03:22:18 by emouity           #+#    #+#             */
/*   Updated: 2026/02/14 18:18:26 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < length)
	{
		if (f(tab[i]) != 0)
		{
			count ++;
		}
		i++;
	}
	return (count);
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
	char *test[] ={"bonjour","aujourd'hui","salut"};

	int  result = ft_count_if(test, 3, text);

	printf("%d", result);
	return (0);
}*/
