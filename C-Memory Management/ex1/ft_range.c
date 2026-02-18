/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:21:42 by emouity           #+#    #+#             */
/*   Updated: 2026/02/16 14:59:20 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	i;
	int	lenght;

	if (min >= max)
		return (NULL);
	lenght = max - min;
	tab = malloc(sizeof(int) * lenght);
	if (!tab)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		tab[i] = min + i;
		i++;
	}
	return (tab);
}

/*int	main(void)
{
	int	min = 13;
	int max = -10;
	int	i = 0;
	int *tab= ft_range(min, max);

	if (!tab)
		return (0);

	while (i < (max - min))
	{
		printf("%d ",tab[i]);
		i++;
	}
	free(tab);
}*/
