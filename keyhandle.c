/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keyhandle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahamrad <ahamrad@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 04:23:52 by ahamrad           #+#    #+#             */
/*   Updated: 2024/01/17 00:33:32 by ahamrad          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "incs/cub3d.h"

void    close_window(t_cub *cub)
{
    mlx_close_window(cub->mlx.mlx);
    exit(EXIT_SUCCESS);
}

void move_player(t_cub *cub, int r, int w)
{
    int  i;
    int  j;
    
    cub->player.angle += 5 * (M_PI / 180) * r;
    if (cub->player.angle < 0)
       cub->player.angle += 2 * M_PI;
    if (cub->player.angle > 2 * M_PI)
       cub->player.angle -= 2 * M_PI;
    j = cub->player.x + (cos(cub->player.angle) * 30 * w);
    i = cub->player.y + (sin(cub->player.angle) * 30 * w);
    if (cub->map.store_map[(i / TILE_SIZE)][(j / TILE_SIZE)] == '1')
        return ;
    cub->player.x = j;
    cub->player.y = i;
    draw(cub);
    draw_player(cub);
    raycaster(cub);
}

void keyhandle(mlx_key_data_t key_data, void *cub)
{
    t_cub *p = (t_cub *)cub;
    
    if (key_data.key == 256)
        close_window(cub);
    if (key_data.key == KEY_UP)
        move_player(cub, 0, 1);
    if (key_data.key == KEY_DOWN)
        move_player(cub, 0, -1);
    if (key_data.key == KEY_LEFT)
        move_player(cub, -1, 0);
    if (key_data.key == KEY_RIGHT)
        move_player(cub, 1, 0);
    printf("%f : player angle\n", p->player.angle);
}