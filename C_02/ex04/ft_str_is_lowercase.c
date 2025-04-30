/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:56:19 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/27 14:15:54 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_lowercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str < 'a' || *str > 'z')
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
//	char str1[] = "abcde";
//	char str2[] = "abcDE";
//	char str3[] = "";
//
//	printf("R1:%d\n", ft_str_is_lowercase(str1));
//	printf("R2:%d\n", ft_str_is_lowercase(str2));
//	printf("R3:%d\n", ft_str_is_lowercase(str3));
//}
