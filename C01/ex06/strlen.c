/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbourdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 15:51:50 by brbourdi          #+#    #+#             */
/*   Updated: 2022/09/09 14:53:18 by brbourdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int		ft_strlen(char *str)
{
	int nb = 0;
	while(str[nb] != '\0')
	{
		nb++;
	}
	return nb;
}
int main()
{
	char a[250] =" Brendan Bourdin";
	printf(" %d ", ft_strlen (a)); 
}
