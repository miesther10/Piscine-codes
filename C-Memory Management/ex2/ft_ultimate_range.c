/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 15:01:32 by emouity           #+#    #+#             */
/*   Updated: 2026/02/16 16:24:01 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	size;
	int	*tab;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	tab = malloc(sizeof(int) * size);
	if (!tab)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		tab[i] = min + i;
		i++;
	}
	*range = tab;
	return (size);
}

/*int	main(void)
{
	int min = 20;
	int max = 31;
	int	*tab;
	int	size = ft_ultimate_range(&tab, min, max);
	int i = 0;
	
	printf("%d ", size);
	if (size <= 0)
		return (0);
	
	while (i < size)
	{
		printf("%d ",tab[i]);
		i++;
	}	
	free(tab);
}*/
