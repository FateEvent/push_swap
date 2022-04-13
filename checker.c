/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 19:45:42 by faventur          #+#    #+#             */
/*   Updated: 2022/04/13 20:23:11 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	**ft_map_reader(char *filename)
{
	char	**arr;
	char	*buffer;
	char	*temp;
	int		fd;
	int		i;

	i = 0;
	buffer = malloc(sizeof(char) * 1);
	if (!buffer)
		return (NULL);
	buffer[0] = '\0';
	temp = buffer;
	while (1)
	{
		temp = get_next_line(fd);
		if (temp == NULL)
			break ;
		buffer = ft_strjoin(buffer, temp);
		free(temp);
	}
	arr = ft_split(buffer, '\n');
	free(buffer);
	return (arr);
}


int	main(int argc, char *argv[])
{
	char	*buffer;

	buffer = get_next_line(0);
	while (buffer)
	{
		ft_printf("%s\n", buffer);
		buffer = get_next_line(0);
	}
	free(buffer);
	return (0);
}
