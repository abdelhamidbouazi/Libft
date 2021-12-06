/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 13:09:38 by abouazi           #+#    #+#             */
/*   Updated: 2021/11/30 18:54:53 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	size_t			i;

	i = 0;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
		i++;
	}
	return (NULL);
}
/* int main()
{
    char ab[] = "abdelhamid";
    //char *str = memchr(ab, 'l', sizeof(ab));
    int c;
    char *str2 = ft_memchr(ab, 'l', 6);
    
    //printf("%d\n", c);
    //printf("%s", str);
    printf("%s", str2);
} */
