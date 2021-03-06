/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_sp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 14:32:28 by vileleu           #+#    #+#             */
/*   Updated: 2021/09/02 06:36:02 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin_sp(char *s1, char const *s2, char sp)
{
	char			*strj;
	unsigned int	len1;
	unsigned int	len2;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	strj = malloc(sizeof(char) * (len1 + len2 + 2));
	if (!(strj))
		return (NULL);
	ft_memmove(strj, s1, len1);
	strj[len1] = sp;
	ft_memmove(strj + len1 + 1, s2, len2);
	strj[len1 + len2 + 1] = '\0';
	free(s1);
	return (strj);
}
