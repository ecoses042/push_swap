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
    struct s_list *target_node;
    struct s_list *next;
    struct s_list *diffstackhead;
}   t_list;

//check_input
bool ft_check_error(char **str);
void ft_print_error();

//manage_input
long    ft_atoi(const char *str);
int ft_merge(char ***result, char **av);
char	**ft_split(char const *s, char c);
size_t ft_strlen(const char *a);
char	*ft_strdup(const char *src);
char *ft_strjoin(char const *s1, char const *s2);
int ft_strcmp(const char *s1, const char *s2);

//operation
t_list *ft_swap(t_list *lst);
void    print_rotate(t_list **lst, int stack, int duration);
void    print_rr(t_list **a, t_list **b, int duration);
void    print_swap(t_list **lst, int stack);
void ft_pushtob(t_list **remove, t_list **move_to, bool status);
void    print_reverse_rotate(t_list **lst, int stack, int duration);
void    print_rrr(t_list **a, t_list **b, int duration);

//list util
t_list	*ft_lstnew(int new);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
size_t ft_lstsize(t_list *head);
void    ft_set_list(t_list  *a, t_list  *b);
void    set_index(t_list *lst);
void set_above_median(t_list *lst);
void    set_target_node_a(t_list *a, t_list *b);
void    set_target_node_b(t_list *a, t_list *b);
void    set_push_cost_a(t_list *a, t_list *b);
t_list *lst_min(t_list *lst);
t_list *lst_max(t_list *lst);

//lst sort
t_list  *find_min_cost(t_list *lst);

bool ft_check_sort(t_list *lst);
bool    init_sort(char    **content);
t_list *ft_simplesort(t_list *lst);
#endif