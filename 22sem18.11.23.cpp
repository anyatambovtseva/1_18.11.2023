#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a[10] = { 0,0,0,0,0,0,0,0,0,0 }, L, R, X, i, k;
	cout << "������ �� �� �������� ������? ���� �� - ������� 1, ���� ��� - ������� 0" << endl;
	cin >> k;
//		while (k == 1)
//		{
//			cout << "������� ������� [L,R] (L<10, R<11) � �����, �� ������� ������ ��������� �������� �������" << endl;
//			cin >> L >> R >> X;
//			for (i = L - 1; i < R; i++)
//				a[i] = a[i] + X;
//			cout << "������ �� �� �������� ������? ���� �� - ������� 1, ���� ��� - ������� 0" << endl;
//			cin >> k;
//		}
	for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
		cout << a[i] << " ";
	return 0;
}