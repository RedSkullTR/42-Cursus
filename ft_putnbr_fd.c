/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aeroglu <aeroglu@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 02:24:38 by aeroglu           #+#    #+#             */
/*   Updated: 2022/07/01 00:38:45 by aeroglu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	num;

	if (n == -2147483648)
	{
		write(fd, "-2", 2);
		n = 147483648;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n *= -1;
	}
	if (n < 10)
	{
		num = n + 48;
		write(fd, &num, 1);
	}
	while (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
		return ;
	}
}
