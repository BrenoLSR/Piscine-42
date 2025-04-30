/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 16:33:32 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/25 17:27:40 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
//
//int main(void)
//{
//	char *texto = "olá, mundo !";
//	int c = ft_strlen(texto);
//	printf("o tamanho da string é:%d\n",c);
//	return(0);
//}
