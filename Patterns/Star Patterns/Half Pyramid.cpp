/*HalfPyramidPattern:

 *
 * *
 * * *
 * * * *
 * * * * *
 * * * * * *
 * * * * *
 * * * *
 * * *
 * *
 *
 
 */





#include<iostream>
using namespace std;
void HalfPyramidPattern(int n){
    for(int i=1;i<=(2*n-1);i++){
        int columns;
        columns = i>n?(2*n-i):i;
        for(int j=0;j<columns;j++){
            cout<<" *";
        }
     cout<<endl;  
    
}
}
int main(){
    int n;
    cout<<"rows: ";
    cin>>n;
    HalfPyramidPattern(n);
}
