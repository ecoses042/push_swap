#include "../test.h"

//need a function that will return a currect size i for while loop in push_atob

//use diffstackhead to point to changed head node for different stack
//this function will return head node of stack a


//지금 이 상태론 답이 없으니까 그냥 print_operation함수에 반복횟수 넣는 인자 만들고 이걸 통해서 while루프 없애는 게 최선일 듯
//min_cost에 해당하는 a스택의 노드를 b로 옮기는 과정을 구현해야 한다. 
int find_min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

t_list  *push_atob(t_list *a, t_list *b, t_list *min_cost)
{
    if (min_cost->abovemdeian == min_cost->target_node->abovemdeian)
    {
        if (min_cost->abovemdeian)
        {
            a = ft_rotate(a, 2, find_min(min_cost->index,min_cost->target_node->index));
        }
        else
        {

        }
    }
    else if (min_cost->abovemdeian != min_cost->target_node->abovemdeian)
    {
        if (min_cost->abovemdeian)
        {

        }
        else
        {

        }
    }
        //if abovemed is true
            //while 
                //rotate a and b
            //while high index - low index
                //rotate high index
        //if abovemed is false
            //while
                //reverse rotate a and b
            //while high index - low index
                //rra or rrb
    //if abovemed for targetnode and a is diff
        //if abovemed min_cost is true
            //while min_cost->index
                //ra
            //while ft_lstsize(b) - min_cost->target->node->index
                //rrb
        //if abovemed min_cost is false
            //while ft_lstsize(a) - min_cost->index
                //rra
            //while min_cost->target_node->index
                //rb
    //set new a head pointer to new b head.
    //return new a head
}
//1.compare a and a->target node's index
//2.rotate all or reverse rotate all untill lower index
//3.rotate or reverse rotate the remaning index
//if the abovemed is different for a and b,
//seperate the sequence.