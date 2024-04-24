/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 18:04:12 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/23 19:27:17 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*b;
	size_t			i;

	i = 0;
	b = ptr;
	while (i < len)
	{
		b[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
