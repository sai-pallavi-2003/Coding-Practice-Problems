#include<iostream>
using namespace std;
int main(){
    int n=5;
    {
        cout<<"pattern 1 star rectangle:"<<endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    {
        cout<<"pattern 2 star right triangle "<<endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    {
        cout<<"pattern 3 number1 right triangle "<<endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<j;
            }
            cout<<endl;
        }
    }
    {
        cout<<"pattern 4 number2 right triangle "<<endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<i;
            }
            cout<<endl;
        }
    }
    {
    cout<<"pattern 5 inverted right  triangle "<<endl; 
    for(int i=n;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
            if(i==j){
                cout<<endl;
            }
        }
    }
    }
    {
    cout<<"pattern 6 inverted number triangle "<<endl; 
    for(int i=n;i>=0;i--){
        for(int j=1;j<=i;j++){
            cout<<j;
            if(i==j){
                cout<<endl;
            }
        }
    }
    }
    {
        int k;
        cout<<"pattern 7 half pyramid"<<endl; 
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
                //only one space
            }
            for(int k=1;k<=((2*i)-1);k++){
                cout<<"*";
            }
            cout<<endl;
            
        }
    }
    {
   cout<<"pattern 8 inverted pyramid"<<endl;
        int k;
        //pattern 4 inverted half pyramid 
        for(int i=n;i>=0;i--){
            for(int j=0;j<=n-i;j++){
                cout<<" ";
            }
            for(k=1;k<=(2*i)-1;k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    {
        cout<<"pattern 9 diamond pattern "<<endl;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
                //only one space
            }
            for(int k=1;k<=((2*i)-1);k++){
                cout<<"*";
            }
            cout<<endl;
            
        }
        for(int i=n-1;i>=0;i--){
            for(int j=1;j<=n-i;j++){
                cout<<" ";
            }
            for(int k=1;k<=((2*i)-1);k++){
                cout<<"*";
            }
            cout<<endl;
        }
    }
    {
        cout<<"pattern 10 number 3 pattern"<<endl;
        int value=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                cout<<value<<" ";
                value++;
            }
            cout<<endl;
        }
    }
}
