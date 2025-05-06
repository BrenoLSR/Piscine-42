/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brendos- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 11:43:48 by brendos-          #+#    #+#             */
/*   Updated: 2025/05/05 19:19:11 by brendos-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	j;
	int	k;

	(void) argc;
	j = 1;
	while (argv[j] != '\0')
	{
		k = 0;
		while (argv[j][k] != '\0')
		{
			ft_putchar(argv[j][k]);
			++k;
		}
		++j;
		ft_putchar('\n');
	}
}
