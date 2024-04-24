/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 14:08:55 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 13:56:29 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			i;

	if (!src && !dst)
		return (0);
	s = (unsigned char *)src;
	d = (unsigned char *)dst;
	i = 0;
	if (s < d)
		while (len-- > 0)
			d[len] = s[len];
	else
		ft_memcpy(d, s, len);
	return (dst);
}
