/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:26:14 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/29 18:44:42 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < nb && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
int main(void)
{
	charft_strcat dest[50] = "Hello, ";
	char src[] = "World!";
	int nb = 3;

	printf("Before ft_strcat:\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);

	ft_strncat(dest, src, nb);

	printf("\nAfter ft_strcat:\n");
	printf("dest: %s\n", dest);

	return (0);
}
*/
