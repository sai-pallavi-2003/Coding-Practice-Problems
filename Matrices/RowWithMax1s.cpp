/*Given a boolean 2D array of n x m dimensions where each row is sorted.
Find the 0-based index of the first row that has the maximum number of 1's. If no such row exists, return -1.
Sample Input 0
4 4
0 1 1 1
0 0 1 1
1 1 1 1
0 0 0 0
Sample Output 0
2
*/

#include <iostream>
using namespace std;
int main()
{
        int m,n,arr[100][100];
    cout<<"number of rows(m): ";
    cin>>m;
    cout<<"number of columns(n): ";
    cin>>n;
    cout<<"give a binary sorted array: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    int ocount = -1;
    int mcount =0;
    for(int i=0;i<m;i++){
        int count =0;
        for(int j=0;j<n;j++){
            if(arr[i][j]==1){
                count++;
            }
        }
        if(count>mcount){
            count = mcount;
            ocount = i;
        }
    }
    
    cout<<"row with max 1s: "<<ocount;
}
