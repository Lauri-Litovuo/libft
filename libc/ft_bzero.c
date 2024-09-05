/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 16:12:10 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:04:54 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	zero;
	char	*zerop;

	zero = 0;
	zerop = s;
	while (n > 0)
	{
		*zerop = zero;
		zerop++;
		n--;
	}
}
