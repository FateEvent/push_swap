/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faventur <faventur@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 17:13:51 by faventur          #+#    #+#             */
/*   Updated: 2022/03/25 11:40:41 by faventur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The ft_lstsize() function counts the number of elements of the list
** passed as a parameter.
*/

#include "struct.h"

int	ft_lstsize(t_list *lst)
{
	int		counter;

	counter = 0;
	if (lst == NULL)
		return (0);
	while (lst != NULL)
	{
		counter++;
		lst = lst->next;
	}
	return (counter);
}
