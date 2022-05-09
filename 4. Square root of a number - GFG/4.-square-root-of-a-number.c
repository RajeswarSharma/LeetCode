// { Driver Code Starts
//Initial Template for C

#include<stdio.h>
  

 // } Driver Code Ends
//User function Template for C

long long int floorSqrt(long long int x) 
{
    long long int left = 0;
    long long int right = x/2;
    long long int res = 0;
    long long int mid = 0;
    if(x ==1) return x;
    
    while(left<=right){
        mid = (left+right)/2;
        if(mid*mid == x) return mid;
        else if(mid*mid>x){
            right = mid-1;
        }
        else{
            res = mid;
            left = mid+1;
        }
    }
    return res;
    // Your code goes here   
}

// { Driver Code Starts.

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		long long n;
		scanf("%ld", &n);
	
		printf("%ld\n", floorSqrt(n));
	}
    return 0;   
}
  // } Driver Code Ends