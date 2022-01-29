/* To print a Triangular number pattern like:
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
when the number of rows are 5.
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
	        int j=1;
	        while(j<=i){
	            System.out.print(j);
	            j=j+1;
	        }
	        System.out.println();
	        i=i+1;
	    }
	}
}
