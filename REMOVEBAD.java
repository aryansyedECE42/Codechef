/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
	    Scanner sc = new Scanner(System.in);
        int T = sc.nextInt();

        for (int m = 0; m < T; m++) { 
        int N = sc.nextInt();
               
            int[] arr = new int[N];
        
            
            for (int a = 0; a<N; a++) {
                arr[a] = sc.nextInt();
                
            }
            
            
            
            int element = Integer.MIN_VALUE, max_count = 1, count = 1;

            Arrays.sort(arr);
             int num = 0;

            for (int i = 1; i < N; i++) {

                if (arr[i] == arr[i - 1])
                    count++;

                if (arr[i] != arr[i - 1] || i == N - 1) {

                    if (count > max_count) {

                        max_count = count;
                        element = arr[i - 1];
                    }

                    count = 1;
                }
            }
           
            for (int l = 0; l < N; l++) {
                if (arr[l] == element) {
                    num++;
                }

            }

             int ans = N - num;
             if(ans==N){
                 System.out.println(N-1);
             }else{
                 
             System.out.println(ans);
             }



          
            


        }
	}
}