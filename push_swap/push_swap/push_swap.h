/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msong <msong@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:19:34 by msong             #+#    #+#             */
/*   Updated: 2024/01/19 14:20:57 by msong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef push_swap_h
#define push_swap_h

#include <limits.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct s_list
{
    int content;
    struct s_list *next;
}   t_list;

//function that sets av to the char ** datatype that contains only 1 number per char * returns the length of converted av
int ft_merge(char ***result, char **av);
char    *ft_strdup(const char *src);
char    *ft_strjoin(char const *s1, char const *s2);
size_t  ft_strlen(const char *a);
int     ft_strcmp(const char *s1, const char *s2);
char    **ft_split(char const *s, char c);
void    ft_print_error();
bool    ft_check_error(char **str);


//list utility related functions
t_list	*ft_lstnew(int new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int ft_lstsize(t_list *head);
bool   ft_check_sort(t_list *lst);


#endif