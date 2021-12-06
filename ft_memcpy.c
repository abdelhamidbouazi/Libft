/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 14:05:04 by abouazi           #+#    #+#             */
/*   Updated: 2021/11/23 16:13:48 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmpdst;
	const char		*tmpsrc;

	i = 0;
	if (!dest && !src)
		return (NULL);
	tmpdst = dest;
	tmpsrc = src;
	while (i < n)
	{
		tmpdst[i] = tmpsrc[i];
		i++;
	}
	return (dest);
}
/* int main()
{
    char ab[] = "efhhhh";
    char bc[4] = "abcd";
    int len  = 4;
    
    //ft_memcpy(ab, bc, len);
       
    printf("%s", (char *)ft_memcpy(ab, bc, len));
}  */