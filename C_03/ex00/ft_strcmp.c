/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:58:56 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/28 11:34:30 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	i++;
	}
	return (s1[i] - s2[i]);
}

//int main()
//{
//	char str1[] = "HELLO";
//	char str2[] = "HELLO";
//	char str3[] = "World";
//
//	printf("R1:%d\n", ft_strcmp(str1, str2));
//	printf("R2:%d\n", ft_strcmp(str1, str3));
//	printf("R3:%d\n", ft_strcmp(str3, str1));
//}
