/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fcamoin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 10:07:12 by fcamoin           #+#    #+#             */
/*   Updated: 2023/07/11 11:32:30 by fcamoin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	while (i < size)
	{
		while (tab[i] > tab[i + 1])
		{
			swap = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = swap;
			i = 0;
		}
		i++;
	}
}

/*int main()
{
    int tab[] = {5, 2, 8, 1, 6};
    int size = sizeof(tab) / sizeof(tab[0]);

    printf("Avant le tri :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    ft_sort_int_tab(tab, size);

    printf("Après le tri :\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return (0);
}*/
