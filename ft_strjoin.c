/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartins <emartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:22:52 by emartins          #+#    #+#             */
/*   Updated: 2023/03/10 23:39:11 by emartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_check_s1_s2(char const *s1, char const *s2)
{
	if (!s1 && s2)
		return (ft_strdup(s2));
	if (!s2 && s1)
		return (ft_strdup(s1));
	return (NULL);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	int		index;
	int		index_new;
	char	*new;

	if (!s1 || !s2)
		return (ft_check_s1_s2(s1, s2));
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	index = 0;
	index_new = 0;
	new = (char *)malloc(sizeof(char) * (len_s1 + len_s2) + 1);
	if (!new)
		return (NULL);
	while (s1[index])
	{
		new[index_new] = s1[index];
		index_new++;
		index++;
	}
	new[index_new] = '\0';
	ft_strlcat(new, s2, (len_s1 + len_s2) + 1);
	return (new);
}
