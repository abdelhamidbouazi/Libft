/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 18:23:31 by abouazi           #+#    #+#             */
/*   Updated: 2021/11/30 17:58:13 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	l;
	size_t	i;

	l = 0;
	i = 0;
	while (src[l] != '\0')
	{
		l++;
	}
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (l);
}
/* int main()
{
	char ab[] = "abdelhamid";
	char bc[] = "bouazi";
	char az[] = "abdelhamid";
	char bz[] = "bouazi";
	size_t j = 5;

	printf("%zu\n", ft_strlcpy(ab, bc, j));
	//printf("%d\n", ft_strlcat(ab, bc, j));
	printf("%zu\n", strlcpy(az, bz, j));
	//printf("%s\n", az);
	//printf("%s",ab);
}
 */