/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 13:37:47 by abouazi           #+#    #+#             */
/*   Updated: 2021/11/30 21:09:05 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*srcc;
	char	*dstt;

	srcc = (char *)src;
	dstt = (char *)dst;
	if (dst == src)
		return (NULL);
	i = -1;
	if (src > dst)
	{
		while (len > ++i)
			dstt[i] = srcc[i];
	}
	else
	{
		while (len)
		{
			dstt[len - 1] = srcc[len - 1];
			len--;
		}
	}
	return (dst);
}
/*  int main()
{
    char bc[] = "abcde";
	char b1[] = "abcde";
	char b2[] = "abcde";
	
    //printf("original %s\n", memmove(bc+2, bc, len));
       
    printf("mine m : %s\n", (char *)ft_memmove(bc+2, bc, 3));
	printf("mine c : %s\n", (char *)memmove(b2+2, b2, 3));


}  */
