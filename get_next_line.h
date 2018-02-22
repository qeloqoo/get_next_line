/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdubrovs <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/05 14:14:28 by mdubrovs          #+#    #+#             */
/*   Updated: 2017/01/13 12:56:29 by mdubrovs         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 9999
# include <fcntl.h>
# include <stdlib.h>
# include "libft/libft.h"

typedef struct		s_fdlist
{
	int				fd;
	char			*txt;
	struct s_fdlist	*next;
}					t_fdlist;

int					get_next_line(const int fd, char **line);
t_fdlist			*list_edit(const int fd);
int					scan_txt(t_fdlist *curr, char **line);
int					scan_buff(char	*buf, t_fdlist *curr, char **line);
int					cleanup(t_fdlist *curr, char **line);

#endif
