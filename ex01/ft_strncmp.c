/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 15:31:48 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/29 16:13:50 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
	i++;
	}
	if (i < n)
	{
		return ((unsigned char) s1[i] - (unsigned char) s2[i]);
	}
	return (0);
}
//
//int main(void)
//{
//printf("%d\n", ft_strncmp("abcde", "abcdf", 5));
//printf("%d\n", ft_strncmp("abc", "abc", 3));
//printf("%d\n", ft_strncmp("abc", "abb", 3));
//printf("%d\n", ft_strncmp("abc", "abcd", 4));
//printf("%d\n", ft_strncmp("abcd", "abc", 4));
//return (0);
//}
