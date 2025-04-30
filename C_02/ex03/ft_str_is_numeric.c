/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:58:35 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/27 13:49:16 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_numeric(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str < '0' || *str > '9')
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
//	char str1[] = "123456";
//	char str2[] = "123abc";
//	char str3[] = "";
//
//	printf("R1:%d\n", ft_str_is_numeric(str1));
//	printf("R2:%d\n", ft_str_is_numeric(str2));
//	printf("R3:%d\n", ft_str_is_numeric(str3));
//
//	return (0);
//}
