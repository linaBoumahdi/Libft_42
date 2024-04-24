/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 18:33:04 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 12:15:43 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*a;
	int		size;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen (s1) + ft_strlen (s2) + 1;
	a = malloc(size);
	if (!a)
		return (NULL);
	ft_strlcpy (a, s1, size);
	ft_strlcat (a, s2, size);
	return (a);
}
