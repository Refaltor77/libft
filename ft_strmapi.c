/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartins <emartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:22:52 by emartins          #+#    #+#             */
/*   Updated: 2023/03/10 23:39:11 by emartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*strnew;
	int		index;

	if (!s)
		return ((char *)s);
	if (!f)
		return (0);
	strnew = ft_strdup(s);
	if (!strnew)
		return (NULL);
	index = 0;
	while (strnew[index])
	{
		strnew[index] = (char)f(index, strnew[index]);
		index++;
	}
	return (strnew);
}
