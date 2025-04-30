/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <brendos-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 09:21:55 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/28 09:37:09 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
	i++;
	}
	return (str);
}

//int main()
//{
//	char str[] = "HELLO, WORLD!";
//
//	printf("Antes: %s\n", str);
//	ft_strlowcase(str);
//	printf("Depois: %s\n", str);
//
//	return (0);
//}
