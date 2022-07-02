#include<iostream>
using namespace std;
int revInt(int n){
int rem,rev=0;
int temp=n;
while(n!=0){
    rem=n%10;
    n=n/10;
    rev=rev*10+rem;
}
if(rev==temp){
    return 1;
}
else{
    return 0;
}
}
int main(){
    int n=1232;
    if(revInt(n)){
        cout<<"palindrome ";
    }
    else{
        cout<<"no";
    }
}
