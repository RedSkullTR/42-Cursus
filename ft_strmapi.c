/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 01:11:56 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/05 01:58:53 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*tmp;

	if (!s)
		return (NULL);
	tmp = malloc(sizeof(char) * (ft_strlen((char *)s) + 1));
	if (!tmp)
		return (NULL);
	i = 0;
	while (s[i])
	{
		tmp[i] = f(i, s[i]);
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

/*char ft(unsigned int a, char b)
{
	if(b <= 'z' && b >= 'a')
		return (b - 32);
	return (b);
}
int main()
{
	char s[] = "ahmet";
	printf("%s", ft_strmapi(s, ft));

}*/
