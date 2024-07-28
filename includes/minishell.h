/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbenyahy <nbenyahy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/06 15:16:31 by nbenyahy          #+#    #+#             */
/*   Updated: 2024/07/28 16:37:19 by nbenyahy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

 int globalVar;
# include "../sources/super_libft/libft.h"
# include "lexer.h"
# include "parser.h"
#include "executor.h"
# include "env.h"
# include <dirent.h>
# include <errno.h>
# include <signal.h>
# include <stdio.h>
# include <stdlib.h>
# include <stdbool.h>
# include <string.h>
# include <termios.h>
# include <unistd.h>
#include <stdio.h>
#include <readline/readline.h>
#include <readline/history.h>
// # include "env.h"
# include "colors.h"
# include "here_doc.h"
# include "builtins.h"
# include "helper.h"
#include "wildcard.h"
#include "signals.h"
# include "lexer.h"
#include "free.h"
# include "ambiguous.h"



typedef struct s_global_data
{
    t_env *env;
}   t_global_data;

#endif
