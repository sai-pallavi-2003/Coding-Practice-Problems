/* converting a decimal to its respective binary value*/

#include<iostream>
using namespace std;
void DecimalToBinary(int n){
    int rem;
    int dec =0 ;
    int base = 1;
    while(n!=0){
        rem = n%2;
        dec += (rem*base);
        n= n/2;
        base *= 10;
        
    }
    
    cout<<"binary: "<<dec;
}
int main(){
  int num;
    cout<<"decimal: ";
    cin>>num;
    DecimalToBinary(num);
}
