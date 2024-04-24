/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 14:39:45 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 11:00:07 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *cntnt)
{
	t_list	*new;

	new = malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = cntnt;
	new->next = NULL;
	return (new);
}
