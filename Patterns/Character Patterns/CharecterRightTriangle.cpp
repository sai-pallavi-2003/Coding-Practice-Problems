/* To create a pattern of the type:
A
BB
CCC
DDDD
EEEEE
*/

#include<iostream>
using namespace std;
void rightTraingle(int n){
  int i,j;
  for(i=1;i<=n;i++){
    for(j=1;j<=i;j++){
      cout<<char(i+64);
      //the ascii value of A starts from 65.
    }
    cout<<endl;
  }
}
int main(){
  int n;
  cout<<"n: ";
  cin>>n;
  rightTraingle(n);
}
