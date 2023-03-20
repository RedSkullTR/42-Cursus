/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 19:25:06 by aeroglu           #+#    #+#             */
/*   Updated: 2022/06/30 05:38:58 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	if ((size_t)dst - (size_t)src < len)
	{
		i = len - 1;
		while (i < len)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i--;
		}
	}
	else
	{
		while (i < len)
		{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
		}
	}
	return (dst);
}

/*int main()
{
	char dizi[] = "kerim";
	char dizi1[] = "kerimcik";
	printf("%s", ft_memmove(dizi1, dizi,5));
}*/
