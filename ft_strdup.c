/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartins <emartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:22:52 by emartins          #+#    #+#             */
/*   Updated: 2023/03/10 23:39:11 by emartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		index;
	int		len_src;
	char	*result;

	index = 0;
	len_src = ft_strlen(s);
	result = (char *)malloc(sizeof(char) * len_src + 1);
	if (!result)
		return (NULL);
	while (s[index])
	{
		result[index] = s[index];
		index++;
	}
	result[index] = '\0';
	return (result);
}
