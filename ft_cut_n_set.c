/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cut_n_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcrosnie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/06 19:40:19 by pcrosnie          #+#    #+#             */
/*   Updated: 2015/12/06 19:54:52 by pcrosnie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

char	**ft_cut_n_set(t_piece *ptr, int nb_piece)
{
	int		i;
	int		j;
	char	**tab;


