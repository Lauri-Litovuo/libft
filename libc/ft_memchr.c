/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 18:15:13 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:05:50 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	ch;

	ch = c;
	ptr = (unsigned char *)s;
	while (n > 0)
	{
		if (*ptr != ch)
		{
			ptr++;
			n--;
		}
		else
			return (ptr);
	}
	return (NULL);
}
