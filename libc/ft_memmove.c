/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 10:23:04 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:06:00 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char			*dstp;
	char			*srcp;

	dstp = (char *)dst;
	srcp = (char *)src;
	if (!srcp && !dstp)
		return (dst);
	if (srcp < dstp)
	{
		while (len--)
			dstp[len] = srcp[len];
		return (dst);
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
