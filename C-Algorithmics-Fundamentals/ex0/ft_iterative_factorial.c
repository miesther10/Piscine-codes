/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:13:15 by emouity           #+#    #+#             */
/*   Updated: 2026/02/03 22:52:12 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	result = 1;
	if (nb > 1)
	{
		while (nb > 1)
		{
			result = result * nb;
			nb--;
		}
	}
	return (result);
}

/*int	main(void)
{
	int	answer;

	answer = ft_iterative_factorial(1);
	printf("%d\n", answer);
	return (0);
}*/
