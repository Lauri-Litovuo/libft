/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 08:57:21 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:05:16 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size && count && ((count * size) / count) != size)
		return (NULL);
	ptr = malloc(count * size);
	if (!(ptr))
		return (NULL);
	ft_bzero(ptr, (count * size));
	return (ptr);
}
