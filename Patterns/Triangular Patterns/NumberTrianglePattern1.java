/* To print a triangular number pattern of the form:
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
for 5 rows.
*/

import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner s = new Scanner(System.in);
	     System.out.println("Give n");
	    int n = s.nextInt();
	    int i=1;
	    while(i<=n){
	        int p=i;
          // the differnce between Floyd's triangle pattern and this pattern is that the variable 'p' is initialised to 'i' inside the 'while loop'
	        int j=1;
	        while(j<=i){
	            System.out.print("  "+p);
	             p=p+1;
	            j=j+1;
	           
	        }
	        System.out.println();
	        i=i+1;
	    }
	}
}

© 2022 GitHub, Inc.
