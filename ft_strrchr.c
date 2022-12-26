/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 14:48:20 by nikitos           #+#    #+#             */
/*   Updated: 2022/12/22 23:01:01 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int		len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (char)c)
			return ((char *)s + len);
		len--;
	}
	return (NULL);
}

// int main()
// {
// 	const char str[] = "http://www.tutorialspoint.com/";
// 	int c = '\0';
// 	char *ret;
// 	printf("%c\n",'\0');
// 	ret = ft_strrchr(str,c);
// 	printf("String after |%c| is - |%s|\n", c, ret);
// 	return (0);
// }