/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nikitos <nikitos@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:46:20 by nikitos           #+#    #+#             */
/*   Updated: 2022/12/31 17:00:25 by nikitos          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && i < n - 1 && s2[i] == s1[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main()
// {
// 	char *str1 = "hello1aa";
// 	char *str2 = "hello1aZ";
// 	size_t n = 9;
// 	int result;

// 	result = ft_strncmp(str1,str2, n);
// 	printf("My: %d\n", result);
// 	printf("Original: %d\n",strncmp(str1,str2,n));
// 	return (0);
// }