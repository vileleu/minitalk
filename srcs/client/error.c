/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vico <vico@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/02 04:22:38 by vico              #+#    #+#             */
/*   Updated: 2021/09/25 16:21:33 by vico             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "client.h"

int	error_msg(char *msg)
{
	ft_putstr_fd(msg, 2);
	ft_putstr_fd("\n", 2);
	return (0);
}