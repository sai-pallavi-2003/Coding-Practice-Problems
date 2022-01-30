/* converting a binary number to its respective decimal*/

#include<iostream>
using namespace std;
void BinaryToDecimal(int n){
    int rem,temp;
    int dec =0 ;
    int base = 1;
    while(n!=0){
        rem = n%10;
        dec += (rem*base);
        n= n/10;
        base *= 2;
        
    }
    
    cout<<"decimal: "<<dec;
}
int main(){
  int num;
    cout<<"binary: ";
    cin>>num;
    BinaryToDecimal(num);
}
