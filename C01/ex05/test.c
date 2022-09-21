/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbourdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 06:39:45 by brbourdi          #+#    #+#             */
/*   Updated: 2022/09/09 14:54:26 by brbourdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int x;
	x = 0;
	while(str[x])
	{
	ft_putchar(str[x]);
	str++;
}

}

 int main()
{
	ft_putstr("Brendan Bourdin ");
}
