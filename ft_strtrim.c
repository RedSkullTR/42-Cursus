/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 19:44:55 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/05 02:10:24 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *s2)
{
	size_t	len;

	if (!s1 || !s2)
		return (NULL);
	while (ft_strchr(s2, *s1) && *s1 != '\0')
		s1++;
	len = ft_strlen((char *)s1);
	while (ft_strchr(s2, s1[len]) && len != 0)
		len--;
	return (ft_substr((char *)s1, 0, len + 1));
}
/*int main()
{
	char s1[] = "------------zeynep----";
	char s2[] = "-";
	printf("%s", ft_strtrim(s1, s2));
}*/
