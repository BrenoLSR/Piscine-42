/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 19:21:32 by brendos-          #+#    #+#             */
/*   Updated: 2025/04/23 16:37:00 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
//#include<stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

//int	main(void)
//{
//	int a = 45;
//	int b = 5;
//	int	v1 = 0;
//	int	v2 = 0;
//	int	*div = &v1;
//	int	*mod = &v2;
//
//	printf("Before ft_div_mod: \n");
//	printf(" %p and %d\n", div, *div);
//	printf("%p and %d\n", mod, *mod);
//	ft_div_mod(a, b, div, mod);
//	printf("\n");
//	printf("After ft_div_mod: \n");
//	printf("%p and %d\n", div, *div);
//	printf("%p and %d\n", mod, *mod);
//}
