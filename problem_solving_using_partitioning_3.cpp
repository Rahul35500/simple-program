#include <iostream>
#include <iomanip>
using namespace std;
void first_positive_negative_arreange_order(int array[], int n);
int partition(int array[], int n);
int main()
{
    int array[100], i, n;
    cout << "Enter the size of the of array:";
    cin >> n;
    cout << "Enter the array :\n";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    first_positive_negative_arreange_order(array, n);
    // for (i = 0; i < n; i++)
    // {
    //     cout <<array[i]<<",";
    //     ;
    // }
}
int partition(int array[], int n)
{
    int i;
    int pivot = 0;
    int index = 0;
    for (i = 0; i < n; i++)
    {
        if (array[i] < pivot)
        {
            cout <<"value of the i position:" << array[i];
            int d = array[i];
            cout << "array of p:" << array[index] << endl;
            array[i] = array[index];
            array[index] = d;
            cout << "array of p 2:" << array[index] << endl;
            index++;
        }
    }
    cout << "index:" << index << endl;

    return index;
}
void first_positive_negative_arreange_order(int array[], int n)
{
    int i, p;
    p = partition(array, n);
    cout << "P value are:" << p << endl;
    for (i = 0; (p < n && i < p); p++, i += 2)
    {
        cout << "negative are:" << array[i];
        int c = array[i];
        cout << "array of p:" << array[p] << endl;
        array[i] = array[p];
        array[p] = c;
        cout << "array of p 2:" << array[p] << endl;
    }
    for (i = 0; i < n; i++)
    {
        cout << array[i] << " ";
    }
}
