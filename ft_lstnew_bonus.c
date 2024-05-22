/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emartins <emartins@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 23:22:52 by emartins          #+#    #+#             */
/*   Updated: 2023/03/10 23:39:11 by emartins         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*tlist;

	tlist = (t_list *)malloc(sizeof(*tlist));
	if (!tlist)
		return (NULL);
	tlist->content = content;
	tlist->next = NULL;
	return (tlist);
}
