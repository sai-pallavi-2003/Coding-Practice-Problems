/*finding is the given number is odd or even using the '&' operation*/


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"n: ";
    cin>>n;
//even numbers end with 0 in binary, odd numbers end with 1.  
    if((n&1)==1){
        cout<<"given number is odd";
    }
    else{
        cout<<"given number is even";
    }
/*'&' of an even number and 1 is 0. since '&' of 0 and 1 is 0
whereas '&' of an odd number and 1 is 1, since '&' of 1 and 1 is 1.*/
}
