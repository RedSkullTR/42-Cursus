/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/25 06:07:24 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/05 02:25:13 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0' && (char)c != *s)
		s++;
	if ((char)c == *s)
		return ((char *)s);
	return (0);
}

/*int main()
{
    char *s = "ahmmmmet";
    printf("%s\n", ft_strchr(s, 'm'));
    printf("%s", strchr(s, 'm'));
}*/
