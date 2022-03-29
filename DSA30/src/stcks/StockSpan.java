package stcks;

import java.util.*;
import java.io.*;
import java.lang.*;

class gfg
{
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n =sc.nextInt();
            int a[] = new int[n];
            
            int i = 0;
            for(i = 0; i < n; i++)
              a[i] = sc.nextInt();
              
            int[] s = new Solution().calculateSpan(a, n);
            
            for(i = 0; i < n; i++)
            {
                System.out.print(s[i] + " ");
            }
            
            System.out.println();
        }
    }
    
    
    
}// } Driver Code Ends


class Pair{
    int val;
    int idx;
    Pair(int i, int j){
        val = i;
        idx = j;
    }
}
class Solution
{
    //Function to calculate the span of stock’s price for all n days.
    public static int[] calculateSpan(int price[], int n)
    {
        Stack<Pair> s = new Stack<>();
        Pair g = new Pair(Integer.MAX_VALUE, -1);
        s.push(g);
        for(int i = 0; i<n; i++){
            while(s.peek().val<=price[i]) s.pop();
            int temp = price[i];
            price[i] = i-s.peek().idx;
            Pair p = new Pair(temp, i);
            s.push(p);
        }
        return price;
    }
    
}