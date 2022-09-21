/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbourdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 07:44:25 by brbourdi          #+#    #+#             */
/*   Updated: 2022/09/06 10:12:25 by brbourdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;

}
int main ()
{
	int a;
	int b;
	int mod;
	int div;
	a = 50;
	b = 100;
	
	ft_div_mod(a, b, &div, &mod);
	printf("%d, %d", div, mod);
}
	
