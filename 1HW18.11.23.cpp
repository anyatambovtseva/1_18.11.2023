#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int N, a[60000], sum=0, maxim=0;
	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> a[i];
	for (int i = 0; i < N; i++)
	{
		sum = sum + a[i];
		if (sum > maxim)
			maxim = sum;
		if (sum < 0)
			sum = 0;
	}
	cout << maxim;
	return 0;
}