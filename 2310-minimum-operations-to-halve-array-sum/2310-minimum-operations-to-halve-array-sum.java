class Solution {
    public int halveArray(int[] nums) {
      PriorityQueue<Double> pq = new PriorityQueue<Double>(Collections.reverseOrder());
      Integer result = 0;
      Double totalSum = 0d;
      for(Integer value:nums){
          totalSum+=value;
          pq.offer(Double.valueOf(value));
      }
      Double halfSum = totalSum;
      while(halfSum>totalSum/2){
        Double top = pq.poll();
        top/=2;
        halfSum-=top;
        pq.offer(top);
        result++;
        }
    return result;
    }
}