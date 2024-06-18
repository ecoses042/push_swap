#ifndef test_h
#define test_h


#include <stdlib.h>
#include <stdbool.h>
#include <stddef.h>
#include <unistd.h>
#include <limits.h>

typedef struct s_list
{
    int content;
    int index;
    int push_cost;
    bool    abovemdeian;
    bool    cheapest;
    struct s_list *target_node;
    struct s_list *next;
}   t_list;

//check_input
bool ft_check_error(char **str);
void ft_print_error(char **str, int mode);

//manage_input
long    ft_atoi(const char *str);
bool ft_atol(const char *str);
int ft_merge(char ***result, char **av);
int ft_strcmp(const char *s1, const char *s2);
char    *ft_strdup(const char *src);
char    *ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);
size_t  ft_strlen(const char *a);
t_list	*ft_lstnew(int new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);

//manage sort fuctions
t_list  *find_min_cost(t_list *lst);
void    set_index(t_list *lst);
void    set_above_median(t_list *lst);
void    set_target_node_a(t_list *a, t_list *b);
void    set_target_node_b(t_list *a, t_list *b);
void    set_push_cost(t_list *a, t_list *b);
void    ft_set_list_a(t_list  *a, t_list  *b);
void    ft_set_list_b(t_list *a, t_list *b);
bool    init_sort(char    **content);

//operation
size_t  ft_lstsize(t_list *head);
void    ft_push(t_list **remove, t_list **move_to, bool status);
void    print_reverse_rotate(t_list **lst, int stack);
void    rrr_cheapest(t_list **a, t_list **b, t_list *cheapest_node);
void    print_rotate(t_list **lst, int stack);
void    print_rr(t_list **a, t_list **b);
void    rr_cheapest(t_list **a, t_list **b, t_list *cheapest_node);
void    print_swap(t_list **lst, int stack);

//simple sort related functions
bool ft_check_sort(t_list *lst);
t_list *lst_min(t_list *lst);
t_list *lst_max(t_list *lst);
t_list *ft_simplesort(t_list *lst);

//complex sort related functions
t_list  *ft_complexsort(t_list *a);
t_list *get_cheapest(t_list *a);
void    ft_apushb(t_list **a,t_list **b);
void    ft_bpusha(t_list **a, t_list **b);
void    prep_for_push(t_list **lst, t_list *cheapest_node, bool stack);
void    rotate_min_to_top(t_list **a);


#endif