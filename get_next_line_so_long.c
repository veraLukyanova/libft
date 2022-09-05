
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_so_long.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gconger <gconger@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/27 14:04:18 by gconger           #+#    #+#             */
/*   Updated: 2022/04/27 15:12:12 by gconger          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "so_long.h"
//#include <stdio.h>
//#include <unistd.h>
//#include <stdlib.h>
//#include <fcntl.h>

int get_next_line(int fd, char **line)
{
	char *buf;
    int i;
    int res_read;
    
    res_read = 0;
    i = 0;
    if (fd < 0 || fd > 256)
        return (0);
	buf = malloc(100000);
    if (!buf)
        return (0);
	while ((res_read = read(fd, &buf[i], 1)) == 1 && buf[i] != '\n' && buf[i] != '\0')
		i++;
    if (res_read == 0)
        return(0);
    buf[i++] = '\n';
	buf[i] = '\0';
	*line = buf;
	free(buf);
    return (res_read);
}

/*int main()
{
    int fd;
    char *line=NULL;
    int j = 0;
    
    fd = open("my_map.ber", O_RDONLY);
    while ((j = get_next_line(fd, &line)) > 0)
        printf("%s", line);
    free(line);
}*/
