/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_copy.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 12:53:49 by aneitenb          #+#    #+#             */
/*   Updated: 2024/09/05 11:45:53 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/****************************************************
*	Copies the src vector into the dst vecotr.		*
*	Returns: (int) 1 on success, -1 on failure.		*
*****************************************************/

int	vec_copy(t_vec *dst, t_vec *src)
{
	size_t	copy_size;

	if (!dst || !src || !src->memory)
		return (-1);
	else if (!dst->memory)
		vec_new(dst, src->len, src->elem_size);
	if (src->len * src->elem_size < dst->alloc_size)
		copy_size = src->len * src->elem_size;
	else
		copy_size = src->alloc_size;
	ft_memcpy(dst->memory, src->memory, copy_size);
	dst->len = copy_size / dst->elem_size;
	return (1);
}
