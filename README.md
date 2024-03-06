this project sorts input and displays list of operations it took to sort it in ascending order.
list of operations are:
sa: Swap a - Swap the positions of the top two elements in stack a.

sb: Swap b - Swap the positions of the top two elements in stack b.

ss: Execute sa and sb simultaneously.

pa: Push a - Take the top element from stack b and push it onto the top of stack a. If stack b is empty, do nothing.

pb: Push b - Take the top element from stack a and push it onto the top of stack b. If stack a is empty, do nothing.

ra: Rotate a - Shift all elements in stack a up by one index. The first element (top) becomes the last element (bottom).

rb: Rotate b - Shift all elements in stack b up by one index. The first element (top) becomes the last element (bottom).

rr: Execute ra and rb simultaneously.

rra: Reverse rotate a - Shift all elements in stack a down by one index. The last element (bottom) becomes the first element (top).

rrb: Reverse rotate b - Shift all elements in stack b down by one index. The last element (bottom) becomes the first element (top).

rrr: Execute rra and rrb simultaneously.

sequence of sorting:
Push two numbers onto stack B.

1. Compare the numbers' sizes and move the min to the tail and the max to the head.

2. Compare the numbers in stack A with those in stack B and select the node that should be connected.

3. The target node should be the closest node in stack B that is smaller than the currently selected node in stack A.

  If there is no smaller value than the node in stack A, set the max value as the target node.

  Calculate the cost of connecting nodes from stack A to the target node in stack B.

4.To perform pa and pb, the nodes must be positioned at the tail of each stack, so the cost includes:

  The cost of the current node being positioned at the tail of stack A.

  The cost of the target node being positioned at the tail of stack B.

  The criteria for using the rr function and the s function are as follows:

    If the length of the stack is greater than the midpoint, use s; otherwise, use the rr function.
5. Move the node with the lowest connection cost from A to B and connect it to the target node.
  If the cost is 0 (both nodes are at the tail of the stack), move it to stack B without calculating the cost of other nodes.

6. Repeat steps 3, 4, and 5 until stack A is composed of numbers 3.

7. Sort stack A in ascending order (1, 2, 3...).

8. Set the target node as the node in stack A that is greater than but closest to the nodes in stack B.

  If the node in stack B is the greatest, set the target node as min.
9. Repeat steps 4 and 5 until stack B is empty, moving nodes to stack A.

10. Check for the min value in stack A, and if it is positioned below the stack, use the rra to sort it.
