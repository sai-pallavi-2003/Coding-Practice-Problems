/* Floyd's Triangle is a triangle with first natural numbers.
It is the right arrangement of the numbers/values or patterns. 
Basically, it is a left to right arrangement of natural numbers in a right-angled triangle.
 Floyd's Triangle:
 1 
 2 3
 4 5 6
 7 8 9 10
 when 4 is the number of rows.
 */
 
 
 import java.util.*;
public class Main
{
	public static void main(String[] args) {
	    Scanner s = new Scanner(System.in);
	    int p=1;
	     System.out.print("Give number of rows: ");
	    int n = s.nextInt();
	    int i=1;
	    while(i<=n){
	        int j=1;
	        while(j<=i){
	            System.out.print(p+" ");
              // the variable 'p' is used to print numbers in incrementing order and 'j' is used for looping.
	            p=p+1;
	            j=j+1;
	           
	        }
	        System.out.println();
	        i=i+1;
	    }
	}
}
