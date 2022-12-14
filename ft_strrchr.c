/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:33:10 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/14 23:51:04 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*chr;
	size_t	i;
	size_t	j;
	size_t	k;

	chr = (char *)s;
	i = ft_strlen(chr);
	j = i - 1;
	while (j >= 0)
	{
		if (chr[j] == c)
		{
			k = j;
			while (k < i)
			{
				return (&chr[k]);
			}
		}
		j--;
	}
	return (NULL);
}

// int main()
// {
// 	const char str[] = "http://www.tutorialspoint.com/";
// 	int c = 46;
// 	char *ret;
// 	printf("%c\n",c);
// 	ret = ft_strrchr(str,c);
// 	printf("String after |%c| is - |%s|\n", c, ret);
// 	return (0);
// }