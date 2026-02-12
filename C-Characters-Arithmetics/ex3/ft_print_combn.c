/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:15:40 by emouity           #+#    #+#             */
/*   Updated: 2026/02/02 18:13:19 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_number(int tab[], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		ft_putchar(tab[i] + '0');
		i++;
	}
	i = 0;
	if (tab[0] != 10 - n)
	{
		write(1, ", ", 2);
	}
}

void	combi(int tab[], int n, int position, int start)
{
	int	test;

	if (position == n)
	{
		print_number(tab, n);
		return ;
	}
	test = start;
	while (test <= 9 - (n - 1 - position))
	{
		tab[position] = test;
		combi (tab, n, position + 1, test + 1);
		test++;
	}
}

void	ft_print_combn(int n)
{
	int	tab[10];

	if (n <= 0 || n >= 10)
	{
		return ;
	}
	combi(tab, n, 0, 0);
}

/*int	main(void)
{
	ft_print_combn(2);
	ft_putchar('\n');
	ft_print_combn(5);
	ft_putchar('\n');
	ft_print_combn(8);
	ft_putchar('\n');
	return (0);
}*/
