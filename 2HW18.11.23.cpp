#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int N, M, kol;
	float maxim, minim;
	cout << "������� ����� N>1 � M<32000" << endl;
	cin >> N >> M;
	while (N <= 1 || M >= 32000)
	{
		cout << "��������� �������. ������� ����� N>1 � M<32000" << endl;
		cin >> N >> M;
	}
	if (N > M)
	{
		maxim = M;
		minim = N;
	}
	else
	{
		maxim = N;
		minim = M;
	}
	kol = (ceil(maxim / minim)) * minim;
	cout << kol;
	return 0;
}