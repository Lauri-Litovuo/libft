/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_remove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 13:21:39 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 11:46:32 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/********************************************************************
*	Removes an element from index position in the vector without	*
*   overwriting existing elements.                                  *
*	Returns: 1 on success, -1 on failure.							*
*********************************************************************/

int	vec_remove(t_vec *src, size_t index)
{
	if (!src || index > src->len || !src->memory)
		return (-1);
	ft_memmove(vec_get(src, index), &src->memory[(index + 1) * src->elem_size], \
	(src->len - index - 1) * src->elem_size);
	src->len--;
	return (1);
}
