/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:13:08 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:06:47 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;
	char			*cpysrc;

	cpysrc = (char *)src;
	i = 0;
	if (dstsize > 0)
	{
		while (cpysrc[i] != '\0' && i + 1 < dstsize)
		{
			dst[i] = cpysrc[i];
			i++;
		}
		dst[i] = '\0';
	}
	while (cpysrc[i] != '\0')
	{
		i++;
	}
	return (i);
}
