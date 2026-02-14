/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 01:56:02 by emouity           #+#    #+#             */
/*   Updated: 2026/02/14 17:46:30 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

/*int	multiplication(int nb)
{
	nb = nb * 2;
	return (nb);
}*/

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	i;
	int	*newtab;

	newtab = (int *) malloc(sizeof(int) * length);
	if (!newtab)
		return (NULL);
	i = 0;
	while (i < length)
	{
		newtab[i] = f(tab[i]);
		i++;
	}
	return (newtab);
}

/*int	main(void)
{
	int tab[] = {1, 2, 3, 4};
	int *result = ft_map(tab, 4, multiplication); 

	for (int i = 0; i < 4; i++)
		printf("%d", result[i]);
	return (0);
	free(result);
}*/
