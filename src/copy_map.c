/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 19:58:30 by aignacz           #+#    #+#             */
/*   Updated: 2022/05/02 19:55:08 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3D.h"

void	cpy_map(t_window *mlx)
{
	int	x_col;
	int	y_row;

	y_row = 0;
	while (y_row < mlx->height)
	{
		x_col = 0;
		while (x_col < mlx->width)
		{
			mlx->img.data[to_coord(mlx->width, x_col, y_row)]
				= mlx->img.data_bg[to_coord(mlx->width, x_col, y_row)];
			x_col++;
		}
		y_row++;
	}
	draw_player(mlx, C_PLAYER);
}
