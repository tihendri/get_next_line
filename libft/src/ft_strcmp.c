/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:52:49 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/12 15:36:39 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	char	cmp1;
	char	cmp2;
	int		i;

	i = 0;
	while (*(s1 + i) != 0 && *(s1 + i) == *(s2 + i))
		i++;
	cmp1 = s1[i];
	cmp2 = s2[i];
	return ((unsigned char)cmp1 - (unsigned char)cmp2);
}
