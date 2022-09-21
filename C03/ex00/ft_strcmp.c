/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbourdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:35:58 by brbourdi          #+#    #+#             */
/*   Updated: 2022/09/15 07:41:50 by brbourdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i])
	{
		if (s1[i] > s2[i])
		{
			return (1);
		}
		else if (s1[i] < s2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
//int main ()
//{
//	printf("%d\n", ft_strcmp("BrenDan",
//	"Brendan")); // D = 68 et d = 100 donc s1 est < s2 donc -1
//	printf("%d\n", ft_strcmp("Hello",
//	"HellO")); // o = 111 et O 79 donc s1 est > s2 donc 1 
//	printf("%d\n", ft_strcmp("ecole42", "ecole42")); // == donc 0
//}
