/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 01:14:11 by abouazi           #+#    #+#             */
/*   Updated: 2021/11/23 22:05:57 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s == NULL)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
}

/* #include <fcntl.h>
int main(int ac ,char **argv)
{

	FILE *fptr;
	
    int fd = open(argv[1],  O_WRONLY | O_CREAT | O_TRUNC, 0644, 0);
    ft_putstr_fd (argv[2], fd );
    printf("%d", fd );

} */