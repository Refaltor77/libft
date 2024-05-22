/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartins <emartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:22:52 by emartins          #+#    #+#             */
/*   Updated: 2023/03/10 23:39:11 by emartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			index;
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;

	index = 0;
	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	if (n <= 0)
		return (0);
	while (index < n)
	{
		if (cast_s1[index] != cast_s2[index])
		{
			return (cast_s1[index] - cast_s2[index]);
		}
		index++;
	}
	return ((int)(*cast_s1 - *cast_s2));
}
