/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tihendri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 12:57:46 by tihendri          #+#    #+#             */
/*   Updated: 2019/07/04 12:58:17 by tihendri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int fd;
	char *string;
	int i;
	int k;

	fd = open("file.txt", O_RDONLY);
	k = 0;
	while ((i = get_next_line(fd, &string)) > 0)
		printf("%s\n", string);
	close(fd);
	return (0);
}
