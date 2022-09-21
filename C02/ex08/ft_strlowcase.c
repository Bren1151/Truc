/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: brbourdi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 20:24:54 by brbourdi          #+#    #+#             */
/*   Updated: 2022/09/14 20:01:46 by brbourdi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
//int main ()
//{
//	char str[300] = "brendan BouHFHFWFrdin qfnhqeifbuqeiubfIFUBQEFBQEUBFQ";
//	printf("%s" ,ft_strupcase(str));
//}
