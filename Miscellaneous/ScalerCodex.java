/*Problem Statement:
You are given a big number in the form of a string A from charecters 0 to 9
Return 1 if its divisible by 30 else return 0

Sample Input 0:
3030300
Sample Output 0:
1

*/

import java.math.BigInteger;
public class Solution{
    public int solve(String A){
        try{
            BigInteger a = new BigInteger(A);  
            BigInteger ans = a.mod(BigInteger.valueOf(30));
            int ans1 = ans.intValue();
            if(ans1%30==0){
                return 1;
            }
        }
        catch(NumberFormatException e){           
        }
        return 0;
    }
}

/*Big Integer class extends Number and implements Comparable interface. 
It provides analogues to all of Java's primitive integer operators and all methods from java.lang.Math package.
The approach:
The string is first converted into a BigInteger and another BigInteger ans performs the 'mod' operation on the two values.
'Mod' : mod is an inbuilt function inside the BigInteger class which returns the remainder of the two big integers and it is always a non negative big integer
this is then converted into an integer using the intValue and then is again applied the modulo operator to check if it gives 0 or 1.
Try-Catch block is used as debug statement.
NumberFormatException occurs when a string cannot be converted into a BigInteger
*/
