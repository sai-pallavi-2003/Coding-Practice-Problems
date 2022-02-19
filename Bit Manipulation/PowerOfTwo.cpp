/* Given a non-negative integer N. The task is to check if N is a power of 2. More formally, check if N can be expressed as 2x for some x.

Optimized approach: using Bit Manipulation as it takes constant space
Time Complexiety : O(1)
*/

#include<iostream>
using namespace std;
bool checkPower(int n){
 int val;
 val=(n &(n-1));
  //only a power of two returns 0 with its preceeding number 
 if(val==0){
  return 1;
  }
return 0;
}
int main(){
  int n,res;
  cout<<"n: ";
  cin>>n;
  res=checkPower( n);
  if(res!=1){
    cout<<"not a power";
  }
  else{
    cout<<"power";
  }
}
