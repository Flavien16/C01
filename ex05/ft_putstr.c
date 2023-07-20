/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:53:58 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/20 11:31:12 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0 ;
	while (str[i])
		i++;
	write(1, str, i);
}

/*int	main(void)
{
	ft_putstr("Tu es en train de me corriger\n");
	return (0);
}*/
