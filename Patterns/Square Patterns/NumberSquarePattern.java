/*to print the pattern:
1111
2222
3333
4444 
when number of rows are 4. 
This is a sqaure pattern with 'n' number of rows and columns.
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
	            System.out.print(i);
	            j=j+1;
	        }
	        System.out.println();
	        i=i+1;
	    }
	}
}
