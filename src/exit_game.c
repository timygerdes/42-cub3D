/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_game.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgerdes <tgerdes@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 20:20:02 by tgerdes           #+#    #+#             */
/*   Updated: 2022/05/14 17:39:54 by tgerdes          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../cub3D.h"

int	exit_game(t_window *mlx)
{
	if (mlx->map)
		ft_lstclear(&(mlx->map), free);
	free(mlx->screen.distance);
	free(mlx->screen.worient);
	free(mlx->screen.w_heights);
	free(mlx->screen.w_hits_xy);
	if (mlx->mlx)
	{
		if (mlx->mlx_win)
			mlx_destroy_window(mlx->mlx, mlx->mlx_win);
		mlx_loop_end(mlx->mlx);
		free(mlx->mlx);
	}
	exit(0);
}

void	throw_error(int error_code)
{
	if (error_code == 1)
		ft_printf("Error. There was a problem with the mlx library.\n");
	else if (error_code == 2)
		ft_printf("Error. Invalid map!\n");
	else if (error_code == 3)
		ft_printf("Error. Wrong file extension!\n");
	else if (error_code == 4)
		ft_printf("Error. Something went wrong opening the file!\n");
}
