/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 04:04:45 by emouity           #+#    #+#             */
/*   Updated: 2026/02/14 17:20:34 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	is_up;
	int	is_down;

	if (length <= 1)
		return (1);
	i = 0;
	is_up = 1;
	is_down = 1;
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) > 0)
			is_up = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			is_down = 0;
		i++;
	}
	if (is_up || is_down)
		return (1);
	return (0);
}

/*int	compa(int a, int b)
{
	if (a < b)
		return (-2);
	if (a == b)
		return (0);
	return (2);
}

int	main(void)
{
	int tab1[] = {1, 2, 3 , 5};
	int tab2[] = {12, 10, 8, 1};
	int tab3[] = {5, 5, 1 , 5};
	int tab4[] = {5, 5, 5, 5};
	int tab5[] = {};
	printf("%d\n",ft_is_sort(tab1, 4, compa));
	printf("%d\n",ft_is_sort(tab2, 4, compa));
	printf("%d\n",ft_is_sort(tab3, 4, compa));
	printf("%d\n",ft_is_sort(tab4, 4, compa));
	printf("%d\n",ft_is_sort(tab5, 0, compa));
}*/
