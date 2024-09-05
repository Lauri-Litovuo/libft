/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llitovuo <llitovuo@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 19:07:18 by llitovuo          #+#    #+#             */
/*   Updated: 2024/09/05 12:07:00 by llitovuo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char		*phaystack;
	char		*pneedle;
	size_t		needle_len;
	int			decider;

	phaystack = (char *)haystack;
	pneedle = (char *)needle;
	needle_len = ft_strlen(pneedle);
	if (needle[0] == '\0' || phaystack == pneedle)
		return (phaystack);
	if (len == 0)
		return (NULL);
	while (*phaystack != '\0' && len >= needle_len && len > 0)
	{
		if (*phaystack == *pneedle)
		{
			decider = ft_strncmp(pneedle, phaystack, needle_len);
			if (decider == 0)
				return (phaystack);
		}
		phaystack++;
		len--;
	}
	return (NULL);
}
