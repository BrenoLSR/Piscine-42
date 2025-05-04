/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 16:17:16 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/29 17:42:46 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
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
	char dest[50] = "Hello, ";
	char src[] = "World!";

	printf("Before ft_strcat:\n");
	printf("dest: %s\n", dest);
	printf("src: %s\n", src);

	ft_strcat(dest, src);

	printf("\nAfter ft_strcat:\n");
	printf("dest: %s\n", dest);

	return (0);
}
*/
