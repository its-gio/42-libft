/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gaguirre <gio_aguirre19@yahoo.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 21:06:07 by gaguirre          #+#    #+#             */
/*   Updated: 2017/06/30 22:31:22 by gaguirre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static int is_trimmable(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s)
{
	char *start;
	char *finish;

	start = (char *)s;
	finish = ft_strchr(s, 0) - 1;
	while (is_trimmable(*start))
		start++;
	while (is_trimmable(*finish) && finish > start)
		finish--;
	return (ft_strsub(start, 0, 1 + finish - start));
}
