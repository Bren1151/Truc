/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbourdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/13 19:24:05 by brbourdi          #+#    #+#             */
/*   Updated: 2022/09/15 07:40:03 by brbourdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
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

//int	main()
//{
//	printf("%d \n", ft_strncmp("Hellonfkwf"
//	, "HelloWorld", 6)); // n en ascii plus grand que W donc 1
//	printf("%d \n", ft_strncmp("Hello", "Hello", 3)); // egal donc 0 etc 
//}
