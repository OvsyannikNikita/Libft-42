/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: novsiann <novsiann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 17:51:54 by novsiann          #+#    #+#             */
/*   Updated: 2022/12/13 18:11:38 by novsiann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 127)
	{
		c -= 32;
	}
	return (c);
}

// int main()
// {
// 	char c = 'a';
// 	char res = ft_toupper(c);
// 	printf("%c", res);
// }