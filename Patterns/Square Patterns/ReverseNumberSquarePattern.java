/* To print a number pattern in reverse like:
54321
54321
54321
54321
54321
when number of rows are 5.
This is a sqaure pattern where number of rows and columns are equal.
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
	            System.out.print(n-j+1);
	            j=j+1;
	        }
	        System.out.println();
	        i=i+1;
	    }
	}
}
