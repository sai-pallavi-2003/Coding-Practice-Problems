/*Invert Right Triangle:

****
***
**
*

*/


#include<iostream>
using namespace std;
void InvertRightTrianglePattern(int n){
    for(int i=1;i<=n;i++){
        for(int j=n-i+1;j>0;j--){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"rows: ";
    cin>>n;
    InvertRightTrianglePattern(n);
}
