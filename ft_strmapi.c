/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 15:58:44 by abouazi           #+#    #+#             */
/*   Updated: 2021/11/23 23:05:36 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	str = ft_strdup(s);
	if (!str)
		return (NULL);
	while (s[i])
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str [i] = '\0';
	return (str);
}
/* char	rot1(unsigned int i, char str)
{
	if (i % 2 == 0)
		return str - 32;
	return (str);
}
int main()
{
	char s[] = "abdelhamid bouazi";
	char *result = ft_strmapi(s, rot1);
	printf("%s", result);
} */