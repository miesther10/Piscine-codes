/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 11:07:35 by emouity           #+#    #+#             */
/*   Updated: 2026/02/01 15:14:49 by osavarin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_drawline(int x, char left, char mid, char right)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (i == 0)
			ft_putchar(left);
		else if (i == x - 1)
			ft_putchar(right);
		else
			ft_putchar(mid);
		i++;
	}
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	j;

	j = y - 2;
	if (x <= 0 || y <= 0)
		return ;
	ft_drawline(x, '/', '*', '\\');
	while (j > 0)
	{
		ft_drawline(x, '*', ' ', '*');
		j--;
	}
	if (y > 1)
		ft_drawline(x, '\\', '*', '/');
}
