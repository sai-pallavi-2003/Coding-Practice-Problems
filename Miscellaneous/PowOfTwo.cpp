/* We are given an integer and the goal is to check whether the integer is a power of two, that is, it can be represented as some whole power of ‘2‘.
* here we are checking only for an integer not for long 

Brute Force approach :

there can be two possibilties in the first step:
a. the number is divisible by 2
b. the number is not divisible by 2
though the number is divisible by 2 it might not be a power of 2.
logic to check if it is power of 2:
after sequntial division of the given number with 2, if the number becomes 1 then the number is a power of 2, else its not a power of 2

optimised approach: using bit manipulation
*/
#include <bits/stdc++.h>
using namespace std;
bool powerOfTwo(int n)
{
    while(n % 2 == 0)
        n /= 2;
    if(n == 1){
        return 1;
    }
    return 0;
}
int main()
{
    int n;
    cout<<"n: ";
    cin>>n;
    //int res;
    // res=powerOfTwo(n);
    // cout<<"res: "<<res;
    if(powerOfTwo(n))
        cout << "Yes it is a power"<<endl;
    else
        cout << "No its not a power"<<endl';
    return 0;
}
