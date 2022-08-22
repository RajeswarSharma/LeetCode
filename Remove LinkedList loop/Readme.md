Given a linked list of N nodes such that it may contain a loop.

A loop here means that the last node of the link list is connected to the node at position X. If the link list does not have any loop, X=0.

Remove the loop from the linked list, if it is present.  


Example 1:
<br>
Input:
<br>
N = 3
<br>
value[] = {1,3,4}
<br>
X = 2
<br>
Output: 1
<br>
Explanation: The link list looks like
<br>
1 -> 3 -> 4
     ^    |
     |____|    

A loop is present. If you remove it 
successfully, the answer will be 1. 
<br>
Example 2:
<br>
Input:
<br>
N = 4
<br>
<br>
value[] = {1,8,3,4}
<br>
X = 0
<br>
Output: 1
<br>
Explanation: The Linked list does not 
contains any loop. 
<br>
<br>
Example 3:
<br>
<br>
Input:
<br>
N = 4
<br>
value[] = {1,2,3,4}
<br>
X = 1
<br>
Output: 1
<br>
Explanation: The link list looks like 
<br>
1 -> 2 -> 3 -> 4
     |_________|
<br>
A loop is present. 
If you remove it successfully, 
the answer will be 1. 
<br>
Your Task:
<br>
You don't need to read input or print anything. Your task is to complete the function removeLoop() which takes the head of the linked list as the input parameter. Simply remove the loop in the list (if present) without disconnecting any nodes from the list.
Note: The generated output will be 1 if your submitted code is correct.
<br>
<br>
<br>
Expected time complexity: O(N)
<br>
Expected auxiliary space: O(1)
