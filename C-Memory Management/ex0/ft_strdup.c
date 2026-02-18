/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emouity <emouity@learner.42.tech>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:13:12 by emouity           #+#    #+#             */
/*   Updated: 2026/02/16 13:20:37 by emouity          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*text;
	int		lenght;

	if (!src)
		return (NULL);
	lenght = count(src);
	text = malloc(sizeof(char) * (lenght + 1));
	if (!text)
		return (NULL);
	i = 0;
	while (i < lenght)
	{
		text[i] = src[i];
		i++;
	}
	text[i] = '\0';
	return (text);
}

/*int	main(void)
{
	char  *text = "bonjour toi!";

	printf("%s",ft_strdup(text));
}*/
