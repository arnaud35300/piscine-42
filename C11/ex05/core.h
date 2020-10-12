/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   core.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arguilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:18:50 by arguilla          #+#    #+#             */
/*   Updated: 2020/09/28 17:28:54 by arguilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CORE_H
# define CORE_H

void	ft_assign_value(char **av, t_op *op);
int		ft_check_value(t_op op);
void	ft_assign_tab(t_func **tab);
int		ft_display_result(t_func **tab, t_op op);

#endif
