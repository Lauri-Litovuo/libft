/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 10:14:15 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:07:03 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*sp;
	char	ch;
	char	*temp;
	int		i;

	sp = (char *)s;
	ch = c;
	i = 0;
	while (*sp != '\0')
	{
		if (*sp == ch)
		{
			temp = sp;
			i++;
		}
		sp++;
	}
	if (*sp == ch)
		return (sp);
	else if (i >= 1)
		return (temp);
	else
		return (NULL);
}
