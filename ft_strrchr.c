/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 16:31:11 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 12:57:21 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"  

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	size_t	a;

	i = ft_strlen(s);
	a = i;
	while (i > 0)
	{
		s++;
		i--;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	while (a > 0)
	{
		a--;
		s--;
		if (*s == (unsigned char)c)
			return ((char *)s);
	}
	return (0);
}
