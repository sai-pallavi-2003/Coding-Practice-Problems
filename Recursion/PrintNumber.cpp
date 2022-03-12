/* print numbers linearly from 1 to n and n to 1 without using backtracking*/

#include<iostream>
using namespace std;
void printNumber(int i, int n){
    if(i>n){
        return;
    }
    else{
        cout<<i<<endl;
        printNumber(i+1,n);
    }
}
void printNumberRevese(int n, int i){
    if(n<1){
        return;
    }
    else{
        cout<<n<<endl;
        printNumberRevese(n-1,i);
    }
}
int main(){
    cout<<"n: ";
    int n;
    cin>>n;
    printNumber(1,n);
    printNumberRevese(n,1);
}
