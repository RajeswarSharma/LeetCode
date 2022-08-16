Given a linked list of size N. The task is to reverse every k nodes (where k is an input to the function) in the linked list. If the number of nodes is not a multiple of k then left-out nodes, in the end, should be considered as a group and must be reversed (See Example 2 for clarification).
<br>
Example 1:
<br>
Input:
<br>
LinkedList: 1->2->2->4->5->6->7->8
<br>
K = 4
<br>
Output: 4 2 2 1 8 7 6 5 
<br>
Explanation: 
<br>
The first 4 elements 1,2,2,4 are reversed first 
and then the next 4 elements 5,6,7,8. Hence, the 
resultant linked list is 4->2->2->1->8->7->6->5.
<br>
Example 2:
<br>
Input:
<br>
LinkedList: 1->2->3->4->5
<br>
K = 3
<br>
Output: 3 2 1 5 4 
<br>
Explanation:
<br>
The first 3 elements are 1,2,3 are reversed 
first and then elements 4,5 are reversed.Hence, 
the resultant linked list is 3->2->1->5->4.
<br>
Your Task:
You don't need to read input or print anything. Your task is to complete the function reverse() which should reverse the linked list in group of size k and return the head of the modified linked list.
<br>
Expected Time Complexity : O(N)
<br>
Expected Auxilliary Space : O(1)
<br>
Constraints:
1 <= N <= 104
1 <= k <= N
