#include <iostream>
using namespace std;
void missing(int array[], int n);
int main()

{
    int array[100], n, i;
    cout << "Enter the size of the array:\n";
    cin >> n;
    cout << "Enter the number of the array:\n";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    missing(array, n);
}
void missing(int array[], int n)
{
    int i, sum = 0, j;
    int m;
    int num = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + array[i];
        // cout << "sum" << sum;
    }
    //cout << sum;
    // for (j = 1; j <= n; j++)
    // {
        num = (n+1)+n*(n+1)/2;
    // }
    cout << "num" << num<<endl;
     m=num-sum;
    cout<<m;
}