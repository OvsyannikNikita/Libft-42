/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/22 20:44:46 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/23 12:39:29 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(s1 + i) != *(unsigned char *)(s2 + i))
			return (*(unsigned char *)(s1 + i) - *(unsigned char *)(s2 + i));
		i++;
	}
	return (0);
}

// int main()
// {
// 	char *str1 = "hello1aa";
// 	char *str2 = "hello1aZ";
// 	size_t n = 10;
// 	int result;

// 	result = ft_memcmp(str1,str2, n);
// 	printf("My: %d\n", result);
// 	printf("Original: %d\n",memcmp(str1,str2,n));
// 	return (0);
// }