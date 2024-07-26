/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ambiguous.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 15:07:06 by nbenyahy          #+#    #+#             */
/*   Updated: 2024/07/25 18:58:13 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef AMBIGUOUS_H
# define AMBIGUOUS_H

# include "minishell.h"

char	*ambiguous(void *files, bool type, t_env *env);
bool    imbg(t_elem *tmp, t_env *env);

#endif