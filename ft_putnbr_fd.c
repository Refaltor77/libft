/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartins <emartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:22:52 by emartins          #+#    #+#             */
/*   Updated: 2023/03/10 23:39:11 by emartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	cast;

	cast = (long int)n;
	if (cast < 0)
	{
		ft_putchar_fd('-', fd);
		cast = -cast;
	}
	if (cast > 9)
	{
		ft_putnbr_fd(cast / 10, fd);
		ft_putnbr_fd(cast % 10, fd);
	}
	else
	{
		ft_putchar_fd((char)cast + 48, fd);
	}
}
