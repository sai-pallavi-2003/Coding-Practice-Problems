#include<iostream>
using namespace std;
void PasTri(int n){
    //n is number of rows
    int i,j,k,value=1;
    for(i=0;i<=n;i++){
        //outer for loop is for number of rows
        value=1;
        //since every row starts with 1 every time i loop is run initialise value to 1.
        for(k=n-i;k>0;k--){
            //this loop is used for printing spaces in the form of an inverted right triangle
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            //printing value and changing its value 
            cout<<value<<" ";
            value=value*(i-j)/j;
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"number of rows: ";
    cin>>n;
    PasTri(n);
}


