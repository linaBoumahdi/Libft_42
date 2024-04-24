/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 17:38:12 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 13:22:13 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	i;
	size_t	len_p;

	i = 0;
	if (!s)
		return (NULL);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	if (ft_strlen(s) - start < len)
		len_p = ft_strlen(s) - (size_t)start;
	else
		len_p = len;
	a = malloc (len_p +1);
	if (!a)
		return (NULL);
	while (i < len_p && s[start + i])
	{
		a[i] = s[start + i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
