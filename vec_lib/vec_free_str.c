/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vec_free_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 16:03:24 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 11:45:56 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/************************************************
 *  Frees strings and zeroes vector fields.    	*
 ************************************************/

void	vec_free_str(t_vec *src)
{
	char	*str_ptr;
	size_t	i;

	i = 0;
	while (i < src->len)
	{
		str_ptr = *(char **)vec_get(src, i);
		free(str_ptr);
		i++;
	}
	vec_free(src);
}
