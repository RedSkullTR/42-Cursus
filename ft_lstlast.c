/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 05:48:49 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/05 02:40:11 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*int main()
{
	t_list *a = ft_lstnew("a");
	t_list *b = ft_lstnew("b");
	t_list *c = ft_lstnew("c");
	a->next = b;
	b->next = c;
	printf("%d\n", ft_lstsize(a));
	printf("%s", ft_lstlast(a)->content);
}*/
