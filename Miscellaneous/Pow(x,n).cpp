/* Problem Statement: Implement pow(x, n), which calculates x raised to the power n (i.e., x^n).

Example 1:
Input: x = 2.00000, n = 10
Output: 1024.00000

Example 2:
Input: x = 2.10000, n = 3
Output: 9.26100

Example 3:
Input: x = 2.00000, n = -2
Output: 0.25000
Explanation: 2-2 = 1/22 = 1/4 = 0.25

The constraint in this problem:
n is an integer-> n can range from -2,147,483,648 to 2,147,483,647, when n is positive we can calculate the power but when n is negative we have to return 1/answer-> 1/x^n
so we are making n positive-> the absolute value of -2,147,483,647 does not lie in the range of integer hence overflow occurs.
This can be resolved by declaring n as a long/ long long variable.


Brute force approach:
using pow function or by using a single for loop 
Time Complexity : O(n)

Optimised solution:
without a single for loop
Time Complexity : O(log(n))

*/
//completing the leetcode function 'Solution'

class Solution {
public:
    double myPow(double x, int n) {
    if(x == 1)
        return 1;
    double ans = 1;
    long long power = n;
    if(power < 0){
        power = -1 * power;
      //since the power is now converted to long temporarily we can make 'n' positive
    }
    
    while(power){
        if(power % 2 == 0){
            x = x * x;
            power = power/2;
        }
        else{
            ans *= x;
            power -= 1;
        }
    }
    if(n<0)
        ans =  (double)1/(double)ans;
    
    return ans;
    }
};
