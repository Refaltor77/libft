/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartins <emartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:22:52 by emartins          #+#    #+#             */
/*   Updated: 2023/03/10 23:39:11 by emartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	int				index;
	unsigned char	*cast;

	cast = (unsigned char *)s;
	index = 0;
	while (index < (int)n)
	{
		cast[index] = '\0';
		index++;
	}
}
