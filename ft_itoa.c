/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 03:52:25 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/01 23:23:27 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(int n)
{
	size_t	i;

	i = 0;
	while (n)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*p;
	size_t	len;
	long	number;

	number = n;
	len = ft_intlen(n) + (n < 0) + (n == 0);
	p = malloc(sizeof(char) * len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (number < 0)
		number *= -1;
	if (number == 0)
		p[0] = '0';
	while (number)
	{
		len--;
		p[len] = number % 10 + 48;
		number /= 10;
	}
	if (n < 0)
		p[0] = '-';
	return (p);
}

/*int main()
{
	printf ("%s\n", ft_itoa(91));
	printf ("%s\n", ft_itoa(-32));
	printf ("%s\n", ft_itoa(0));
}*/
