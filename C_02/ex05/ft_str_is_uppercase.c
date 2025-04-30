/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 14:19:57 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/27 16:03:11 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_str_is_uppercase(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (*str < 'A' || *str > 'Z')
		{
			return (0);
		}
		str++;
	}
	return (1);
}

//int main()
//{
//	char str1[] = "ABCDF";
//	char str2[] = "abcdF";
//	char str3[] = "";
//
//	printf("R1:%d\n", ft_str_is_uppercase(str1));
//	printf("R2:%d\n", ft_str_is_uppercase(str2));
//	printf("R3:%d\n", ft_str_is_uppercase(str3));
//
//	return(0);
//}
