/*Given an array of N integers, and an integer K, find the number of pairs of elements in the array whose sum is equal to K.
Sample Input 0
4 2
1 1 1 1
Sample Output 0
6
*/



#include<iostream>
using namespace std;
int main(){
    int n,sum,arr[100];
    cout<<"n: ";
    cin>>n;
    cout<<"sum to check: ";
    cin>>sum;
    cout<<"array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int s_pair=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==sum){
                s_pair++;
            }
        }
    }
    cout<<"number of pairs : "<<s_pair;
}
