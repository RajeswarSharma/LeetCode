class Solution
{
   public static void removeLoop(Node head){
      Node slow = head;
      Node fast = head;
      int count = 0;
    
      while(fast!=null && fast.next!=null){
          count++;
          fast = fast.next.next;
          slow = slow.next;
          if(fast == slow){
              Node tempHead = head;
              Node tail = head;
              for(int i=1;i<count;i++){
                  tail = tail.next;
              }
              
              while(tempHead!=tail.next){
                  tempHead = tempHead.next;
                  tail = tail.next;
              }
              tail.next = null;
              break;
          }
      }
    
}   
}
