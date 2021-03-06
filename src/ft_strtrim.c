/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrandria <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 22:13:29 by nrandria          #+#    #+#             */
/*   Updated: 2016/11/04 01:33:10 by nrandria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s)
{
	char	*ptr;
	int		i;
	int		j;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s);
	while (s[i] && (s[i] == ' ' || s[i] == '\t' || s[i] == '\n'))
		i++;
	if (s[j] == '\0')
	{
		j--;
		while (j > 0 && (s[j] == ' ' || s[j] == '\t' || s[j] == '\n'))
			j--;
	}
	if (j <= 0)
	{
		ptr = (char*)malloc(sizeof(char) * 1);
		ptr[0] = '\0';
		return (ptr);
	}
	else
		return (ptr = ft_strsub(s, i, j - i + 1));
}
