// C++ program for Implementing
// prefix sum array
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int arr[4] = { 10, 4, 16, 20 };
	int prefixSum[4];
	prefixSum[0] = arr[0];

	// Adding present element
	// with previous element
	for (int i = 1; i < 4; i++)
		prefixSum[i] = prefixSum[i - 1] + arr[i];


	for (int i = 0; i < 4; i++)
		cout << prefixSum[i] << " ";
    return 0;
}

