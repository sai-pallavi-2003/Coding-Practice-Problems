/* To form a pattern like:
******
*    *
*    *
*    *
****** 
when the number of rows are 5.
This is a square pattern in which number of rows and columns will be equal and only the borders of the square will be printed.
*/



import java.util.Scanner;
public class Main {
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter number of rows: ");
		int row = sc.nextInt();
		for (int i = 1; i <=row; i++) {
			for (int j = 1; j <= row; j++) 
				if((i==1 || i==row) || (j==1 || j==row))
					System.out.print("*");
				else
					System.out.print(" ");
			System.out.println();
			
		}
	}
}
