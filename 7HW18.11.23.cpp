#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    //задали массивы A и B
    const int size_a = 10;
    const int size_b = 5;
    int a[size_a] = { 1,2,3,4,5,6,7,8,9,10 };
    int b[size_b] = { 3,6,9,12,15 };
    cout << "Массив A: ";
    for (int i = 0; i < size_a; i++)
        cout << a[i] << " ";
    cout << endl;
    cout << "Массив B: ";
    for (int i = 0; i < size_b; i++)
        cout << b[i] << " ";

    //пересечение
    const int size_c = size_b;
    int* c = new int[size_c];
    int k = 0;
    for (int i = 0; i < size_a; i++)
        for (int j = 0; j < size_b; j++)
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
            }
    int* new_c = new int[k];
    copy(c, c + k, new_c);
    delete[] c;
    c = new_c;
    cout << endl;
    cout << "Пересечение: ";
    for (int i = 0; i < k; i++)
        cout << c[i] << " ";

    //объединение
    const int size_g = size_a + size_b;
    int g[size_g];
    int p = 0;
    for (int i = 0; i < size_a; i++)
    {
        g[p] = a[i];
        p++;
    }
    for (int i = 0; i < size_b; i++)
    {
        g[p] = b[i];
        p++;
    }
     for ( int i=0;i<size_g-1;i++)
        for (int j = i+1; j<size_g; j++)
            if (g[i] > g[j]) 
            {
                int temp = g[i];
                g[i] = g[j];
                g[j] = temp;
            }
    cout << endl;
    cout << "Объединение: ";
    for (int i = 0; i < size_g; i++)
        cout << g[i] << " ";

    //вычитание A - B
    cout << endl;
    cout << "A - B: ";
    int size_new_a = size_a - k;
    int* new_a = new int[size_new_a];

    int m = 0, q = 0;
    for (int i = 0; i < size_a; i++)
    {
        for (int j = 0; j < k; j++)
            if (a[i] != c[j])
                q += 1;
        if (q == k)
        {
            new_a[m] = a[i];
            m++;
        }
        q = 0;
    }

    for (int i = 0; i < size_new_a; i++)
        cout << new_a[i] << " ";
}
