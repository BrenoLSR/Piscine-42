/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 18:09:53 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/28 09:19:43 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);
}
//
//int main()
//{
//	char str[] = "Hello, world!";
//
//	printf("Antes: %s\n", str);
//	ft_strupcase(str);
//	printf("Depois: %s\n", str);
//
//	return (0);
//}
