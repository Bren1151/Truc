/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbourdi <brbourdi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 04:03:42 by brbourdi          #+#    #+#             */
/*   Updated: 2022/09/20 22:03:44 by brbourdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	long	i;
	long	b;

	b = nb;
	if (b <= 0)
		return (0);
	if (b == 1)
		return (1);
	i = 2;
	if (b >= 2)
	{
		while (i * i <= b)
		{
			if (i * i == b)
				return (i);
			i++;
		}
	}
	return (0);
}