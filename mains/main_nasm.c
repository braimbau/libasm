/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_nasm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: braimbau <braimbau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/24 10:50:08 by braimbau          #+#    #+#             */
/*   Updated: 2020/04/24 15:53:49 by raimbaul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libc.h>

ssize_t ft_write(int fildes, const void *buf, size_t nbyte);

int main()
{
	printf("TEST QUATRE : ft_write :\n");
	char *str1 = NULL;
	char *str2 = "";
	char *str3 = "Ceci est une phrase de test";
	char *str4 = "C3c* @s^ (n! /h\n";
	write(1, str1 , strlen(str1));
	printf("write (ret = %zd)\n", write(1, str1, strlen(str1)));
//	printf("ft_write (ret = %zd)\n", ft_write(1, str1, strlen(str1)));
}
