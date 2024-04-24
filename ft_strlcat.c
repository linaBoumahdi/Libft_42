/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:12:53 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 12:42:52 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	char	*s;
	size_t	i;
	size_t	j;
	size_t	a;

	i = ft_strlen(dst);
	a = ft_strlen(dst) +ft_strlen (src);
	s = (char *)src;
	j = 0;
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	while (i < dstsize - 1 && s[j])
		dst[i++] = s[j++];
	dst[i] = '\0';
	return (a);
}
