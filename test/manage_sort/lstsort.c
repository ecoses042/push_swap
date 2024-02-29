/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstsort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@42seoul.kr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:59:19 by msong             #+#    #+#             */
/*   Updated: 2024/02/29 16:04:16 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../test.h"

void	free_list(t_list	*head)
{
	t_list	*tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
#include <stdio.h>
void print_list_content(t_list *head) {
    t_list *current = head;

    // Iterate over each node
    while (current != NULL) {
        // Print content of current node
        printf("%d ", current->content);

        // Move to next node
        current = current->next;
    }
    printf("\n"); // Print newline at the end
}
bool	init_sort(char **content)
{
	size_t	i;
	t_list	*a;
	bool	flag;

	flag = false;
	a = NULL;
	i = 1;
	while (content[i])
	{
		printf("%s\n",content[i]);
		ft_lstadd_back(&a, ft_lstnew(ft_atoi(content[i])));
		i++;
	}
	if (!a)
		return (flag);
	if (ft_lstsize(a) <= 3)
		a = ft_simplesort(a);
	else
		a = ft_complexsort(a);
	flag = ft_check_sort(a);
	print_list_content(a);
	free_list(a);
	return (flag);
}
