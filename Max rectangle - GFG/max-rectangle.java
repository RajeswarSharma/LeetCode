//{ Driver Code Starts
import java.util.*;

class FindMinCost
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t > 0)
		{
			int n = sc.nextInt();
			int m = sc.nextInt();
			int arr[][] = new int[n][m];
			for(int i=0; i<n; i++)
			{
				for(int j=0; j<m; j++ )
				{
					arr[i][j] = sc.nextInt();
				}
			}
			System.out.println(new Solution().maxArea(arr, n, m));
		t--;
		}
	}
}
// } Driver Code Ends


/*Complete the function given below*/
class Solution {
    private int getMaxSum(int arr[],int n){
        ArrayDeque<Integer> stack = new ArrayDeque<>();
        int[] left_small = new int[n];
        int[] right_small = new int[n];
        int maxSum = 0;
        for(int i = 0;i<n;i++){
            
            while(!stack.isEmpty() && arr[stack.peek()]>=arr[i]){
                stack.pop();
            }
            
            left_small[i] = stack.isEmpty()?-1:stack.peek();
            
            stack.push(i);
        }
        stack.clear();
        for(int i = n-1;i>=0;i--){
            
            while(!stack.isEmpty() && arr[stack.peek()]>=arr[i]){
                stack.pop();
            }
            right_small[i] = stack.isEmpty()?-1:stack.peek();
            
            stack.push(i);
        }
        
        
        for(int i =0;i<n;i++){
            
            int left_sum = 0;
            int right_sum = 0;
           if(left_small[i] == -1 ){
                left_sum = (i+1)*arr[i];
            }
            else{
                left_sum = (i-left_small[i])*arr[i];
            }
            if(right_small[i]==-1){
                right_sum = (n-i)*arr[i];
            }
            else{
                right_sum = (right_small[i]-i)*arr[i];
            }
             maxSum = Math.max(right_sum+left_sum - arr[i],maxSum);
        }
        return maxSum;
    }
    public int maxArea(int arr[][], int n, int m) {
       int sum=0;
       for(int i = 0;i<m;i++){
           sum = 0;
           for(int j = 0;j<n;j++){
               if(arr[j][i]==0) sum = 0;
               arr[j][i]+=sum;
               sum = arr[j][i];
           }
       }

       for(int i = 0;i<n;i++){
            sum = Math.max(sum,getMaxSum(arr[i],m));
       }
       return sum;
        // add code here.
    }
}