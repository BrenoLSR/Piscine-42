/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 11:41:28 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/27 11:54:56 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	if (*str == '\0')
	{
		return (1);
	}
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
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
//	char str1[] = "abcXYZ";
//	char str2[] = "abc123";
//	char str3[] = "";
//
//	printf("Resultado para 'abcXYZ': %d\n", ft_str_is_alpha(str1));
//	printf("Resultado para 'abc123': %d\n", ft_str_is_alpha(str2));
//	printf("Resultado para string vazia: %d\n", ft_str_is_alpha(str3));
//	return (0);
//}
