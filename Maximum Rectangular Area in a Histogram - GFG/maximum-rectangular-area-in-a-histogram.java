//{ Driver Code Starts
import java.util.*;
import java.lang.*;
import java.io.*;

class GFG {
    
    
	public static void main (String[] args) throws IOException {
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int t = Integer.parseInt(br.readLine().trim());
		while(t-->0){
		    long n = Long.parseLong(br.readLine().trim());
		    String inputLine[] = br.readLine().trim().split(" ");
		    long[] arr = new long[(int)n];
		    for(int i=0; i<n; i++)arr[i]=Long.parseLong(inputLine[i]);
		    System.out.println(new Solution().getMaxArea(arr, n));
		}
	}
}




// } Driver Code Ends


class Solution
{
    //Function to find largest rectangular area possible in a given histogram.
    public static long getMaxArea(long arr[], long N) 
    {
        int n = (int)N;
        long sum = 0;
        ArrayDeque<Integer> stack = new ArrayDeque<>();
        int[] next_small = new int[n];
        int[] prev_small = new int[n];  
        for(int i =0;i<n;i++){
            while(!stack.isEmpty() && arr[i]<=arr[stack.peek()]){
                stack.pop();
            }
            prev_small[i] = stack.isEmpty()?-1:stack.peek();
            stack.push(i);
        }
        stack.clear();
        for(int i = n-1;i>=0;i--){
            while(!stack.isEmpty() && arr[i]<=arr[stack.peek()]){
                stack.pop();
            }
            next_small[i] = stack.isEmpty()?-1:stack.peek();
            stack.push(i);
        }
      
        for(int i =0;i<n;i++){
         long left_sum = 0;
         long right_sum = 0;
            if(prev_small[i] == -1 ){
                left_sum = (long)(i+1)*arr[i];
            }
            else{
                left_sum = (i-prev_small[i])*arr[i];
            }
            if(next_small[i]==-1){
                right_sum = (n-i)*arr[i];
            }
            else{
                right_sum = (next_small[i]-i)*arr[i];
            }
            sum = Math.max(right_sum+left_sum - arr[i],sum);
        }
        return sum;
    }
        
}



