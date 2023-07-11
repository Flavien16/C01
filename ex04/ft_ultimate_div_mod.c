/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 20:45:01 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/11 11:33:02 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main() {
    int num1 = 10;
    int num2 = 3;

    printf("Avant l'appel de la fonction :\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n\n", num2);

    ft_ultimate_div_mod(&num1, &num2);

    printf("Après l'appel de la fonction :\n");
    printf("num1 = %d\n", num1);
    printf("num2 = %d\n", num2);

    return 0;
}*/
