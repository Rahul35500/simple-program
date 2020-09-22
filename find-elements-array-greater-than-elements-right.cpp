#include <iostream>
#include <string>
using namespace std;
void find_elements_array_greater_than_elements_righ(int array[], int n);
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
    find_elements_array_greater_than_elements_righ(array, n);
}
void find_elements_array_greater_than_elements_righ(int array[], int n)
{
    int i;
    int max_value = INT8_MIN;
    cout << "greatest element are in the given array:";
    for (i = n - 1; i >= 0; i--)
    {
        if (array[i] > max_value)
        {
            max_value = array[i];
            cout << " " << array[i];
        }
    }
}