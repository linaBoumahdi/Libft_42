/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 12:36:36 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/22 18:09:30 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char		*a;
	unsigned const char	*b;

	a = dst;
	b = src;
	while (0 < n)
	{
		*(a++) = *(b++);
		n--;
	}
	return (dst);
}
