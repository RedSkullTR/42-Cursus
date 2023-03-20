/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 02:08:33 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/05 02:52:34 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <fcntl.h>
int main()
{
	int fd = open("a.text", O_CREAT | O_RDWR,0777);
	ft_putchar_fd('c', fd);
}*/
