/*Given an array of positive integers. All numbers occur an even number of times except one number which occurs an odd number of times.
Find the number in O(n) time & constant space. 
This can be solved using:
Brute Force with complexity of O(n^2)
Hashing with time complexity of O(n)
XOR operator with time complexity of O(n).

Input : arr = {1, 2, 3, 2, 3, 1, 3}
Output : 3

Input : arr = {5, 7, 2, 7, 5, 2, 5}
Output : 5

*/

#include<iostream>
using namespace std;
int findOddOccurrance(int arr[],int n){
    int result =0 ;
    //not initialising result with 0 will lead to printing of garbage value.
    for(int i=0;i<n;i++){
        result = result^arr[i];
    }
    return result;
}
int main(){
    int n,arr[100];
    cout<<"size: ";
    cin>>n;
    cout<<"give the array with repeated elements:  ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"odd number of occurance: "<<findOddOccurrance(arr,n);
}


