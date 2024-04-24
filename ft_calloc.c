/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:53:25 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/23 19:20:23 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*a;

	if (count * size > INT32_MAX)
		return (NULL);
	a = malloc(size * count);
	if (!a)
		return (NULL);
	ft_bzero (a, size * count);
	return (a);
}
