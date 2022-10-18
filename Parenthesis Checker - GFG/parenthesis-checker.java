//{ Driver Code Starts
import java.util.*;
import java.io.*;
import java.lang.*;

class Driverclass
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        //Reading total number of testcases
        int t= sc.nextInt();
        
        while(t-- >0)
        {
            //reading the string
            String st = sc.next();
            
            //calling ispar method of Paranthesis class 
            //and printing "balanced" if it returns true
            //else printing "not balanced"
            if(new Solution().ispar(st) == true)
                System.out.println("balanced");
            else
                System.out.println("not balanced");
        
        }
    }
}
// } Driver Code Ends




class Solution
{
    //Function to check if brackets are balanced or not.
    private static boolean isOppositeBrackets(char a,char b){
        if(a=='{' && b == '}' || a == '[' && b==']' || a =='(' && b==')'){
            return true;
        }
        return false;
        
    }
    static boolean ispar(String x)
    {
        ArrayDeque<Character>stack = new ArrayDeque<>();
        
        for(int i = 0;i<x.length();i++){
            if(stack.isEmpty()){
                stack.push(x.charAt(i));
            }
            else if(isOppositeBrackets(stack.peek(),x.charAt(i))){
                stack.pop();
            }else{
                stack.push(x.charAt(i));
            }
        }
        // System.out.println(stack.toString());
        return stack.isEmpty();
        // add your code here
    }
}
