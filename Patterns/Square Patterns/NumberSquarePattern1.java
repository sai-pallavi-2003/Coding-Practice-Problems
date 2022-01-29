/* To print a pattern like:
12345
12345
12345
12345
12345
when the number of rows is 5.
This is a square pattern with equal number of rows and columns.
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
	        while(j<=n){
	            System.out.print(j);
	            j=j+1;
	        }
	        System.out.println();
	        i=i+1;
	    }
	}
}
