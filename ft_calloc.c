/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartins <emartins@contact.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:22:52 by emartins          #+#    #+#             */
/*   Updated: 2024/03/22 20:49:11 by emartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*init;

	if (((long int)size < 0 && (long int)nmemb < 0)
		|| ((long int)nmemb * (long int)size) < 0)
		return (NULL);
	init = (void *)malloc(nmemb * size);
	if (!init)
		return (NULL);
	ft_bzero(init, nmemb * size);
	return (init);
}
