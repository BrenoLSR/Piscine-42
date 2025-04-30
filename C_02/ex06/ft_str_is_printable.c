/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 16:05:49 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/27 17:23:38 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
	str++;
	}
	return (1);
}
//
//int main() 
//{
//	char str1[] = "Hello, World!";
//	char str2[] = "Hello\tWorld";
//	char str3[] = "";
//
//	printf("Resultado para 'Hello, World!': %d\n", ft_str_is_printable(str1));
//	printf("Resultado para 'Hello\tWorld': %d\n", ft_str_is_printable(str2));
//	printf("Resultado para string vazia: %d\n", ft_str_is_printable(str3));
//
//	 return(0);
//}
