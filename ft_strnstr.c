/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 16:17:55 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 12:54:43 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*a;

	j = 0;
	a = (char *)haystack;
	if (*needle == '\0')
		return (a);
	while (a[j] != '\0' && (j < len))
	{
		i = 0;
		while (a[j + i] == needle[i] && (j + i < len) && a[j + i] != '\0')
			i++;
		if (needle[i] == '\0')
			return (a + j);
		j++;
	}
	return (0);
}
