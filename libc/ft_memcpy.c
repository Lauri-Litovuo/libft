/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:28:36 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:05:56 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long		i;
	unsigned char		*dstp;
	unsigned const char	*srcp;

	dstp = dst;
	srcp = src;
	i = 0;
	if (dstp == 0 && srcp == 0 && n)
		return (dst);
	while (i != n)
	{
		dstp[i] = srcp[i];
		i++;
	}
	return (dst);
}
