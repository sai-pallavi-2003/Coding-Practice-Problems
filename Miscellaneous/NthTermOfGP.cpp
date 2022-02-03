/*You are given the first term (A), the common ratio (R) and an integer N. Your task is to find the Nth term of the GP series.

Nth term of a GP is given by: a*r^(n-1)

constraints: 
As the answer can be large enough, return the answer modulo 10^9 + 7.

Modulo operator and modulo operation:
while working with integers, there could be large integers which cannot perform required activity in given time. 
the input might be integers but the operations can range to 'unsigned long long int' that dont allow the answer to be returned. 
hence we use modulo operation , represented by % to control/ prevent the overflow of integers.
10^9 + 7 is the first 10 digit prime number that fits in int data type. hence we use this value to perform modulo.

properties:
modulo operator is applied at every intermediate step for efficient results.
(a+b)%c  =  ((a%c)+(b%c))% c

*/
long long power(int R, int N, int mod) {    
    if(N == 0) {
        return 1;
    }
    int i = 0;
    long long pow = 1; 
    while(i < N) {
        pow = (pow * R) % mod;
        i++;
    }
    return pow;
}
int nthTermOfGP(int N, int A, int R) {   
    int mod = 1000000007;   
  //value of 10^9+7 
    long long ans = (A * power(R, N - 1, mod)) % mod; 
  // rather than performing modulo only on the answer we perform modulo at every intermediate step, such that the power is calculated by applying modulo
    return (int) ans;
  //converting long long int to int 
}
