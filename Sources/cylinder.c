/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cylinder.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cdescour <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 17:41:35 by cdescour          #+#    #+#             */
/*   Updated: 2023/03/13 18:34:54 by cdescour         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
#include "../Includes/minirt.h"

void save_cylinder_1(char **info1, char **info2, t_item *item)
{
	t_cyl	*tmp;

	write(1,"4",1);
	if (item->cyl == NULL)
		item->cyl = init_cylinder(info1, info2);
	else
	{
		tmp = item->cyl;
		item->cyl = init_cylinder(info1, info2);
		item->cyl->next = tmp;
	}
	write(1,"5",1);
}

void save_cylinder_2(char *info3, char *info4, char **info5, t_item *item)
{
	t_cyl *tmp;
	
	tmp = malloc(sizeof(t_cyl));
	tmp->pos = item->cyl->pos;
	tmp->dir = item->cyl->dir;
	tmp->d = save_distance(info3);
	tmp->height = save_distance(info4);
	tmp->color = save_color(info5);
	tmp->next = item->cyl->next;
	free_cylinder(item);
	item->cyl = tmp;
	item->nb_cyl += 1;
}

t_cyl	*init_cylinder(char **info1, char **info2)
{
	t_cyl *cyl;

	cyl = malloc(sizeof(t_cyl));
	cyl->pos = save_pos(info1);
	cyl->dir = save_dir(info2);
	cyl->d = 0;
	cyl->height = 0;
	cyl->next = NULL;

	return (NULL);
}

int free_cylinder(t_item *item)
{
	if (!item->cyl)
		return (0);
	if (item->cyl->pos)
		free (item->cyl->pos);
	if (item->cyl->dir)
		free (item->cyl->dir);
	if (item->cyl->color)
		free (item->cyl->color);
	return (1);
}*/
