/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 16:53:14 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/24 12:14:15 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*a;
	int		i;

	i = 0;
	if (!s1)
		return (NULL);
	a = malloc(ft_strlen(s1)+ 1);
	if (!a)
		return (NULL);
	while (*s1)
		a[i++] = *s1++;
	a[i] = '\0';
	return (a);
}
