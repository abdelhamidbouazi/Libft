/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 16:20:47 by abouazi           #+#    #+#             */
/*   Updated: 2021/11/23 17:43:56 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_str;
	int		i;
	int		j;
	int		f;

	i = 0;
	j = 0;
	f = 0;
	if (!s1 || !s2)
		return (NULL);
	new_str = malloc(ft_strlen(s1) + ft_strlen(s2) +1);
	if (!new_str)
		return (NULL);
	if (!s1 && !s2)
		return (NULL);
	while (s1[i])
		new_str[j++] = s1[i++];
	while (s2[f])
		new_str[j++] = s2[f++];
	new_str[j] = '\0';
	return (new_str);
}

/* int main()
{
    char ab[] = "abdelhamid";
    char bc[] = "bouazi";
    char *str;

    str = ft_strjoin(ab, bc);
    printf("%s", str);
} */
