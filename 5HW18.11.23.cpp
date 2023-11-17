#include <iostream>
using namespace std;
void findSum(int arr[], int n)
{
    int power = 1 << n;
    int minim=0;
    for (int i = 0; i < power; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
                sum += arr[j];
        }
        if (sum == minim)
            minim++;
    }
            cout << minim;
}
int main()
{
    int arr[] = { 1,2,3,8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    findSum(arr, n);
    return 0;
}
