/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/05 18:06:53 by emouity           #+#    #+#             */
/*   Updated: 2026/02/06 14:31:58 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	division;
	int	modulo;

	division = *a / *b;
	modulo = *a % *b;
	*a = division;
	*b = modulo;
}

/*int	main(void)
{
	int	a;
	int	b;

	a = 7;
	b = 9;
	ft_ultimate_div_mod(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return (0);
}*/
