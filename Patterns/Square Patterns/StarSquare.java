/* To print a sqaure pattern like:
****
****
****
**** 
when there are 4 rows.
This is a square pattern with 'n' number of rows and columns.
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
	            System.out.print("*");
	            j=j+1;
	        }
	        System.out.println();
	        i=i+1;
	    }
	}
}
