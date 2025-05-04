/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 13:45:06 by brendos-          #+#    #+#             */
/*   Updated: 2025/05/01 11:54:34 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	dest_len;
	unsigned int	src_len;

	i = 0;
	dest_len = 0;
	src_len = 0;
	while (dest[dest_len] && dest_len < size)
		dest_len++;
	while (src[src_len])
		src_len++;
	if (size <= dest_len)
		return (size + src_len);
	while (src[i] && (dest_len + i) < (size - 1))
	{
	dest[dest_len + i] = src[i];
	i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int main(void)
{
	char dest1[20] = "teste1";
	char src1[] = "limite";
	unsigned int size1 = 20;

	char dest2[20] = "Teste 2";
	char src2[] = "continue testando";
	unsigned int size2 = 15;

	unsigned int result1 = ft_strlcat(dest1, src1, size1);
	printf("ft_strlcat: dest = \"%s\", return = %u\n", dest1, result1);
	unsigned int result2 = ft_strlcat(dest2, src2, size2);
	printf("ft_strlcat: dest = \"%s\", return = %u\n", dest2, result2);

	return (0);
}*/
