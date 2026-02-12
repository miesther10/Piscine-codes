/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 20:52:55 by emouity           #+#    #+#             */
/*   Updated: 2026/02/05 13:53:52 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

/*void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
	}
	ft_putchar(nb % 10 + '0');
}

int	main(void)
{
	int	variable;

	ft_ft(&variable);
	ft_putnbr(variable);
	return (0);
}*/
