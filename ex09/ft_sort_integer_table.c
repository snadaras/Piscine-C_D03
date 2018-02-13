/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snadaras <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/19 00:19:50 by snadaras          #+#    #+#             */
/*   Updated: 2017/09/19 00:19:54 by snadaras         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_sort_integer_table(int *tab, int size)
{
    int	i;
    int	temp;

    i = 0;
    while (i < size)
    {
        if (tab[i] > tab[i + 1])
        {
            temp = tab[i + 1];
            tab[i + 1] = tab[i];
            tab[i] = temp;
            i = 0;
        }
        else
            i++;
    }
}
