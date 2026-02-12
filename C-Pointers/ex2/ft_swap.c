/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 17:27:05 by emouity           #+#    #+#             */
/*   Updated: 2026/02/05 17:50:12 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 55;
	b = 10;
	printf("before a : %d ", a);
	printf("\nbefore b : %d ", b);
	ft_swap(&a, &b);
	printf("\nafter a : %d ", a);
	printf("\nafter b : %d ", b);
	return (0);
}*/
