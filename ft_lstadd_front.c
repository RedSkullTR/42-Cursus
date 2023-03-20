/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 04:30:07 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/05 02:30:11 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst)
	{
		new->next = NULL;
		*lst = new;
	}
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*int main()
{
	t_list *a = ft_lstnew("ahmet");
	t_list *b = ft_lstnew("zeynep");
	a->next = b;

	t_list *new = ft_lstnew("42");
	ft_lstadd_front(&a, new);
	printf("%s", new->next->content);
}*/
