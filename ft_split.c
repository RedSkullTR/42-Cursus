/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/29 01:34:04 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/05 01:33:26 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_str(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

int	ft_count(char const *s, char c)
{
	char	pre_c;
	size_t	i;

	i = 0;
	pre_c = c;
	while (*s)
	{
		if (pre_c == c && *s != c)
			i++;
		pre_c = *s;
		s++;
	}
	return (i);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	next;
	char	**strs;

	if (s == NULL)
		return (NULL);
	strs = malloc(sizeof(char *) * (ft_count(s, c) + 1));
	if (strs == NULL)
		return (NULL);
	i = 0;
	while (*s)
	{
		next = ft_str(s, c);
		if (next)
		{
			strs[i] = ft_substr(s, 0, next);
			s += next;
			i++;
		}
		else
			s++;
	}
	strs[i] = 0;
	return (strs);
}
// int        main(void)
// {
//     int id = 0;
//     char **tab;

//     tab = ft_split(",,,,,,dasd,,,,,,ad,,,,,,,,ds,,,,,da,,,asd,,,,", ',');
//     while (id < 5)
//     {
//         printf("string %d : %s\n", id, tab[id]);
//         id++;
//     }
//     return (0);
// }
