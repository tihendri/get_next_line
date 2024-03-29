/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 11:51:23 by tihendri          #+#    #+#             */
/*   Updated: 2019/06/24 14:02:29 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**Applies the function f to each character of the string passed
**as argument by giving its index as first argument to create a “fresh”
**new string (with malloc(3)) resulting from the successive applications of f.
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	n;
	char			*string;

	if (s && f)
	{
		n = 0;
		string = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
		if (string == NULL)
		{
			return (NULL);
		}
		while (s[n] != '\0')
		{
			string[n] = f(n, s[n]);
			n++;
		}
		string[n] = '\0';
		return (string);
	}
	return (0);
}
