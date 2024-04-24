/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 19:14:34 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 12:58:43 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	start = 0;
	end = ft_strlen(s1);
	while (ft_strchr(set, s1[start]) && s1[start])
		start++;
	if (start == end)
		return (ft_strdup(""));
	while (ft_strchr(set, s1[end -1]) && s1[end -1])
		end --;
	return ((char *)ft_substr (s1, start, end - start));
}
