/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 17:20:49 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 10:59:07 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_ls;
	t_list	*tmp;
	void	*a;

	if (!lst || !f || !del)
		return (NULL);
	new_ls = NULL;
	while (lst)
	{
		a = f(lst->content);
		tmp = ft_lstnew(a);
		if (tmp == NULL)
		{
			ft_lstclear(&new_ls, del);
			free(a);
			new_ls = NULL;
			return (NULL);
		}
		ft_lstadd_back(&new_ls, tmp);
		lst = lst->next;
	}
	return (new_ls);
}
