/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aiwanesk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/03 15:23:11 by aiwanesk          #+#    #+#             */
/*   Updated: 2017/03/03 15:23:12 by aiwanesk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cpu.h"

void			exit_error(char *s)
{
	ft_putendl(s);
	exit(-1);
}
