/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/02 05:55:18 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/05 02:43:50 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	free(lst);
}
/*void del(void *lst)
{
	free(lst);
}
int main()
{
	t_list *a = ft_lstnew("ahmet");
	ft_lstdelone(a, del);
	printf("%s\n", a->content);
}*/
