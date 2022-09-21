/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbourdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 07:51:33 by brbourdi          #+#    #+#             */
/*   Updated: 2022/09/18 08:27:50 by brbourdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strcat(char *dest, char *src)

{
	int	a;
	int	b;

	a = 0;
	b = 0;
	while (dest[a])
	{
		a++;
	}
	while (src[b])
	{
		dest[a] = src[b];
		a++;
		b++;
	}
		dest[a] = '\0';
	return (dest);
}

// Objectfif est d'ajouter la chaine 'src' a la fin de la chaine 'dest'

//int main ()
//{
//	char dest[] = "Brendan";
//	char src[] = "Enzo";
//	printf("%s\n",ft_strcat(dest, src));:
//	return (0);
//}
