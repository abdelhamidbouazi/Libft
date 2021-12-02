/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 10:31:04 by abouazi           #+#    #+#             */
/*   Updated: 2021/11/26 14:50:21 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*tmp;

	tmp = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		tmp[i] = c;
		i++;
	}
	return (str);
}
/* int main()
{
    char ab[] = "hello world";
    int len  = 4;
    char a = 'a';
    memset(ab, a, len);
    printf("%s", ab);
}
 */