/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lboumahd <lboumahd@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 20:29:11 by lboumahd          #+#    #+#             */
/*   Updated: 2024/04/22 17:55:29 by lboumahd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_count(int n)
{
	int	count;

	count = 0;
	if (n == 0)
		count ++;
	while (n != 0)
	{
		n = n / 10;
		count ++;
	}
	return (count);
}

static long	ft_abs(long n)
{
	if (n < 0)
		n *= -1;
	return (n);
}

char	*ft_itoa(int n)
{
	char	*a;
	int		len;
	long	nbr;

	nbr = ft_abs(n);
	len = ft_is_count(nbr);
	if (n < 0)
		len = len + 1;
	a = malloc(len + 1);
	if (!a)
		return (NULL);
	a[len] = '\0';
	while (len-- > 0)
	{
		a[len] = nbr % 10 + 48;
		nbr = nbr / 10;
	}
	if (n < 0)
		a [0] = '-';
	return (a);
}
