/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_free.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 13:28:07 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 11:45:59 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/************************************************
 *  Frees memory and zeroes vector fields.    	*
 ************************************************/

void	vec_free(t_vec *src)
{
	free(src->memory);
	src->memory = NULL;
	src->len = 0;
	src->elem_size = 0;
	src->alloc_size = 0;
}
