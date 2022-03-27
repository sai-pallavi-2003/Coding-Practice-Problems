/*Leetcode : 1672. Richest Customer Wealth
You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the ith customer has in the jth bank.
Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.
*/

class Solution {
    public int maximumWealth(int[][] accounts) {
     int r= accounts.length;
    int c= accounts[0].length;
        int initial=0;
        for(int i=0;i<r;i++){
            int s=0;
            for(int j=0;j<c;j++){
                s+=accounts[i][j];
            }
            if(s>initial){
                initial=s;
            }
        }
        return initial;
    }
}
