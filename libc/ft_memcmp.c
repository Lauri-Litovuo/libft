/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:38:10 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:05:52 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*sp1;
	unsigned char	*sp2;

	sp1 = (unsigned char *)s1;
	sp2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n > 0)
	{
		if (*sp1 == *sp2)
		{
			sp1++;
			sp2++;
			n--;
		}
		else
			return (*sp1 - *sp2);
	}
	return (0);
}
