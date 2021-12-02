/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:47:41 by abouazi           #+#    #+#             */
/*   Updated: 2021/11/30 18:55:41 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != (char)c && *str)
		str++;
	if (*str == (char)c)
		return (str);
	return (0);
}
/* int main()
{
    char ab[] = "abdelhamid";
    
    //printf("%s\n", strchr(ab, 'l'));
    printf("%s", ft_strchr(ab, 'l'));
    return 0;
} */
