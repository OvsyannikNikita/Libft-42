/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/19 21:54:46 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/31 16:52:06 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*b;

	b = s;
	while (n--)
	{
		*b = 0;
		b++;
	}
}

// int main()
// {
// 	char s1[] = "Hello";
// 	char s2[] = "Hello";

// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// 	ft_bzero(s1,6);
// 	bzero(s2,6);
// 	printf("%s\n", s1);
// 	printf("%s\n", s2);
// }