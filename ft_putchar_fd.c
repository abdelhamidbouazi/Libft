/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouazi <abouazi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 01:15:11 by abouazi           #+#    #+#             */
/*   Updated: 2021/11/26 21:30:29 by abouazi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/* #include <fcntl.h>
int main(int ac ,char **argv)
{

	FILE *fptr;
	
    int fd = open(argv[1],  O_WRONLY | O_CREAT | O_TRUNC, 0644, 0);
    ft_putchar_fd ('a', fd );
    printf("%d", fd );

} */