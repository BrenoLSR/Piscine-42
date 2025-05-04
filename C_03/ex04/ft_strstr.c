/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 18:47:49 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/30 11:14:48 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (!to_find[0])
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j])
		{
			j++;
		}
		if (!to_find[j])
			return (str + i);
		i++;
	}
	return (0);
}
//
//int main(void)
//{
//	char str[] = "Hello, this is a test string";
//	char to_find[] = "test";
//	char *result;
//
//	result = ft_strstr(str, to_find);
//	if (result)
//		printf("Found: %s\n", result);
//	else
//		printf("Not found\n");
//
//	return (0);
//}
