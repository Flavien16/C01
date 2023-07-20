/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:21:34 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/20 11:30:43 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int	main(void) 
{
	int a = 20;
	int b = 7;
	int div_result;
	int mod_result;

	ft_div_mod(a, b, &div_result, &mod_result);

	printf("Divison : %d\n", div_result);
	printf("Modulo : %d\n", mod_result);
	
	return 0;
}*/
