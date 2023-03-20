/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 06:15:56 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/04 22:37:34 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include   "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	while (i != 0 && (char)c != *(s + i))
	i--;
	if ((char)c == *(s + i))
		return ((char *)(s + i));
	return (0);
}

/*int main()
{
    char *s = "ahmetah";
    printf("%p\n", ft_strrchr(s, 97));
    printf("%p", strrchr(s, 97));
}*/
