/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 13:49:10 by abouazi           #+#    #+#             */
/*   Updated: 2021/12/02 15:08:32 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dl;
	size_t	sl;

	i = 0;
	dl = 0;
	sl = 0;
	while (dst[dl] != '\0')
		dl++;
	while (src[sl] != '\0')
		sl++;
	if (dl >= dstsize)
		sl = sl + dstsize;
	else
		sl = sl + dl;
	if (dstsize == 0)
		return (sl);
	while (src[i] != '\0' && dl < dstsize - 1)
	{
		dst[dl] = src[i];
		dl++;
		i++;
	}
	dst[dl] = '\0';
	return (sl);
}

/* int main()
{
    char *src = strdup("abdelhamid");
    char *dst = strdup("bouazi");

	printf("%lu\n%s", ft_strlcat(dst, src, 4), dst);
	//printf("   strlcat|%lu|%s|\n", strlcat(dst, src, 17), dst);
} */
