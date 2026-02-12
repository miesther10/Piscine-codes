/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 18:28:18 by emouity           #+#    #+#             */
/*   Updated: 2026/02/11 11:20:36 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	compartiment;

	i = 0 ;
	while (i <= size)
	{
		compartiment = i + 1;
		while (compartiment < size)
		{
			if (tab[i] < tab[compartiment])
			{
				tab[i] = tab[i];
			}
			else
			{
				swap(&tab[i], &tab[compartiment]);
			}
			compartiment++;
		}
		i++;
	}
}

/*int	main(void)
{
	int	tab[] ={0, 1, 2, 10, 3, 7, 0, 4, 105};
	int	size = 9;

	printf("Tableau en desordre:");
	for (int i = 0; i < size; i++)
		printf("%d", tab[i]);
	ft_sort_int_tab(tab, size);
	printf("\nTableau en ordonne:");
        for (int i = 0; i < size; i++)
                printf("%d", tab[i]);
}*/
