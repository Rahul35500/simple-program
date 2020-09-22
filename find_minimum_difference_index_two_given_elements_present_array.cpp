#include <iostream>
#include <limits.h>
#include <math.h>
int findminimundifference(int array[], int n, int x, int y);
int minimum(int x, int y);
using namespace std;
int main()
{
    int array[100], n, i, diff, x, y;
    cout << "Enter the size of the array:";
    cin >> n;
    cout << "Enter the element of the array:";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the first number which you want to find:\n";
    cin >> x;
    cout << "Enter the second number which you want to find:\n";
    cin >> y;
    diff = findminimundifference(array, n, x, y);
    if (diff != INT_MAX)
    {
        cout << "Minimun differnce are:" << diff;
    }
    else
    {
        cout << "wrong input value:";
    }
}
int findminimundifference(int array[], int n, int x, int y)
{
    int first_index = n;
    int i;
    int second_index = n;
    int min_value = INT_MAX;
    for (i = 0; i < n; i++)
    {
        if (array[i] == x)
        {
            first_index = i;
            if (second_index != n)
            {
                int d = abs(first_index - second_index);
                min_value = minimum(min_value, d);
            }
        }
        if (array[i] == y)
        {
            second_index = i;
            if (first_index != n)
            {
                int c = abs(first_index - second_index);
                min_value = minimum(min_value, c);
            }
        }
    }
    return min_value;
}
int minimum(int x, int y)
{
    if (x < y)
    {
        return x;
    }
    else
    {
        return y;
    }
}