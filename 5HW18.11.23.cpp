#include <stdio.h>
using namespace std;
int main()
{
	int i, k, a[7] = { 1,1,3,6, 12, 17, 20 };
	for (i = k = 0; i < 7; i++) {
		if (k + 1 < a[i]) break;
		k += a[i];
	}
	printf("k=%d\n", k + 1);
}