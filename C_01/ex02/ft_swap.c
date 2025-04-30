/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:43:32 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/24 14:07:51 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	number;

	number = *a;
	*a = *b;
	*b = number;
}

//int	main(void)
//{
//	int	v1 = 15;
//	int	v2 = 35;
//	int	*a = &v1;
//	int	*b = &v2;
//
//		printf("Before ft_swap: \n");
//	printf("a %d\n", *a);
//	printf("b %d\n", *b);
//	ft_swap(a, b);
//	printf("\n");
//	printf("After ft_swap: \n");
//	printf("a %d\n", *a);
//	printf("b %d\n", *b);
//}
