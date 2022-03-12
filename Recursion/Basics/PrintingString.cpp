/*printing a string for 'N' times*/


#include<iostream>
using namespace std;
void printName(int i,string na, int n){
 // base condition : this is the limiting or the base case which is derived from the problem statement, base case is usually kept at the beginning
    if(i>n){
        return;
    }
    else{
    cout<<na<<endl;
      // n is kept constant i is incremented, i is the count variable or keeps a track of the display 
    printName(i+1, na, n);
    }
}
int main(){
    int n;
    string name;
    cin>>name>>n;
    printName(1,name,n);
  // passing parameters to the function can avoid usage of global variables 
}
