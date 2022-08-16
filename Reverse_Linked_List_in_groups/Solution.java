class Solution
{
    public static Node reverse(Node node, int k)
    {
       Node tempHead = node;
       Node prev=null;
       Node curr = node;
       Node next = null;
       Node tail = null;
       Node head = null;
       int count=1;
       while(curr!= null){
          next = curr.next;
          curr.next = prev;
          prev = curr;
          if(count%k==0||next == null){
              if(head == null){
                  head = curr;
                  tail = node;
              }
              else{
                  tail.next = curr;
                  tail  = tempHead;
              }
              tempHead = next;
              prev = null;
              
          }
          curr = next;
          count++; 
       }
    
    return head;
    }
}
