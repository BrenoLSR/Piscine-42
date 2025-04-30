/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:56:40 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/26 17:27:22 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
//
//int main()
//{
//	char origem[] = "ola";
//	char destino[10];
//	ft_strncpy(destino, origem, 10);
//	printf("destino: %s\n", destino);
//	return (0); 
//}
