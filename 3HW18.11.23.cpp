#include <iostream>
using namespace std;
int main()
{
	int i, j, a[10000], N, kol, sum=0, k;
	//������ ���������� ��������
	cin >> N;
	//������ �������� ��������
	for (i = 0; i < N; i++)
		cin >> a[i];
	//������ ���������� ���
	cin >> kol;
	while (kol > 0)
	{
		sum = 0;
		cin >> i >> j;
		for (k=i-1; k<j; k++)
			sum = sum + a[k];
		cout << sum << endl;
		kol = kol - 1;
	}
	return 0;
}