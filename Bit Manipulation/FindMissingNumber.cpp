/* Given an array nums containing n distinct numbers in the range [0, n], return the only number in the range that is missing from the array.

This problem can be solved using: 
Brute Force approach which has a time complexiety of O(n^2) [using 2 for loops]
Hashing with time complexity O(n) 
Using XOR operator with time complexity O(n).

Properties of XOR operation:
XOR of two distinct numbers is 0.
XOR of any number, a and 0 is a.
XOR of a and a is 0.

completing the Leetcode function :

#include<iostream>
using namespace std;
class Solution {
public:
    
    int missingNumber(vector<int>& nums) {
        int xor1=nums[0],xor2=0,xor11=0;
        for(int i=1;i<nums.size();i++){
            xor1 = xor1^nums[i];
        }
        for(int i=1;i<=nums.size();i++){
            xor2 = xor2^i;
        }
        xor11= xor1^xor2;
        return xor11;
    }
    
};

*/



#include<iostream>
using namespace std;
int missingNumber(int arr[],int n) {
        int xor1=arr[0],xor2=0,xor11=0;
/* calculating the xor of all elements in the array*/
/* if [0,1,3] are given, 2 is the missing number, so xor of 0,1,3.*/
        for(int i=1;i<n;i++){
            xor1 = xor1^arr[i];
        }
/*calculating the xor of all the numbers till n*/
/*xor of all numbers from 0 to 3, so xor of 0,1,2,3*/
        for(int i=1;i<=n;i++){
            xor2 = xor2^i;
        }
/*calculating the xor of above two*/
/*(0,1,3)^(0,1,2,3)=0^0^0^2 = 2 */
        xor11= xor1^xor2;
        return xor11;
}
int main(){
    int arr[100],n;
    cout<<"n: ";
    cin>>n;
    cout<<"array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"missing number is: "<<missingNumber(arr,n);
}

