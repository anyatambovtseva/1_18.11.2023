#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a[10] = { 0,0,0,0,0,0,0,0,0,0 }, L, R, X, i, k;
	cout << "хотите ли вы изменить массив? если да - введите 1, если нет - введите 0" << endl;
	cin >> k;
//		while (k == 1)
//		{
//			cout << "введите отрезок [L,R] (L<10, R<11) и число, на которое хотите увеличить элементы массива" << endl;
//			cin >> L >> R >> X;
//			for (i = L - 1; i < R; i++)
//				a[i] = a[i] + X;
//			cout << "хотите ли вы изменить массив? если да - введите 1, если нет - введите 0" << endl;
//			cin >> k;
//		}
	for (i = 0; i < (sizeof(a) / sizeof(a[0])); i++)
		cout << a[i] << " ";
	return 0;
}