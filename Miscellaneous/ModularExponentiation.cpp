/*You are given a three integers 'X', 'N', and 'M'. Your task is to find ('X' ^ 'N') % 'M'. 
A ^ B is defined as A raised to power B and A % C is the remainder when A is divided by C.

Constraints: 
Integer data type overflow
(10^8 * 10^8) % 10^9 will result in an integer overflow so we will convert it in long long form by multiplying it with 1LL. 
We need to do (1LL*10^8*10^8)%10^9 to get the correct answer. 



int modularExponentiation(int x, int n, int m) {
	// Declare a variable to store our result and initialize it with 1.
	int answer = 1;
	// Iterating 'N' times.
	for (int i = 1; i <= n; i++) {
		// Multiply answer with 'X' and then do modulo with 'M'.
		answer = (1LL * answer * x) % m;
	}
	return answer;
}

/*Time Complexity  : O(N)
	Space Complexity : O(1)
  */
