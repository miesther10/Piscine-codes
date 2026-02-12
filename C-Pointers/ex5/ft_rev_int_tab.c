/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 14:52:03 by emouity           #+#    #+#             */
/*   Updated: 2026/02/10 18:08:25 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < (size / 2))
	{
		swap = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = swap;
		i++;
	}
}

/*int	main(void)
{
	int	tab[] =  {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	int	size = 10;
	printf("Ancien:");
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
	ft_rev_int_tab(tab, size);
	printf("\nNouveau:");
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
	return (0);
}*/
