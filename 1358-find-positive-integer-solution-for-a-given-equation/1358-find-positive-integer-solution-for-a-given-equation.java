/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     public int f(int x, int y);
 * };
 */

class Solution {
    public List<List<Integer>> findSolution(CustomFunction customfunction, int z) {
        List result  = new ArrayList<ArrayList<Integer>>();
        for(int x = 1;x<=1000;x++){
            int start = 1,end = 1000;
            while(start<=end){
                int mid = (start+end)/2;
                int val1 = customfunction.f(x,mid);
               
                if(val1==z){
                    result.add(Arrays.asList(x,mid));
                    break;
                }
              
                else if(val1>z){
                    end = mid-1;
                }
                else if(val1<z){
                    start = mid+1;
                }
            }
        }
        return result;
    }
}