/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:30:04 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:06:41 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*joint;
	int		len;

	len = ft_strlen((char *)s1);
	len += ft_strlen((char *)s2);
	joint = (char *) malloc(len * sizeof(char) + 1);
	if (!(joint))
		return (NULL);
	ft_strlcpy(joint, s1, len + 1);
	ft_strlcat(joint, s2, len + 1);
	return (joint);
}
