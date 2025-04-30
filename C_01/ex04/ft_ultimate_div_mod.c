/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 16:41:04 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/24 13:32:11 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a / *b;
	d = *a % *b;
	*a = c;
	*b = d;
}

//int	main(void)
//{
//	int	n1 = 15;
//	int	n2 = 3;
//	int *a = &n1;
//	int *b= &n2;
//
//	printf("Before ft_ultimate_div_mod: \n");
//	printf("%p and %d\n", a, *a);
//	printf("%p and %d\n", b, *b);
//	ft_ultimate_div_mod(a, b);
//	printf("\n");
//	printf("After ft_ultimate_div_mod: \n");
//	printf("%p and %d\n", a, *a);
//	printf("%p and %d\n", b, *b);
//}
