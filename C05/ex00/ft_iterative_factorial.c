/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbourdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 01:26:50 by brbourdi          #+#    #+#             */
/*   Updated: 2022/09/21 01:29:28 by brbourdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	resultat;
	int	i;

	i = 1;
	resultat = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (i <= nb)
	{
		resultat *= i;
		i++;
	}
	return (resultat);
}
