/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:45:00 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/05 01:46:28 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*void ft(unsigned int a, char *b)
{
	if(b[0] >= 'a' && b[0] <= 'z')
		b[0] -= 32;
}

int main()
{
	char a[] = "ahmet";
	ft_striteri(a,ft);
	printf("%s", a);
}*/
