#include <iostream>
using namespace std;
int split_array(int array[], int n);
int main()
{
    int array[100], i, n;
    cout << "Ente the size of the array:";
    cin >> n;
    cout << "Enter the number of the array:";
    for (i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int split = split_array(array, n);
    // cout << "split" << split;
    if (split == -1)
    {
        cout << "not possible any subarrray in the array:";
    }
    else
    {
             cout << "{";
        for (i = 0; i < n; i++)
        {
            if (split == i)
            {
                cout <<"}"<<endl;
                cout<<"{";
            }
            cout << array[i] << " ";
            //  cout << "}";
        }
        cout<<"}";
    }
}
int split_array(int array[], int n)
{
    int i, j;
    int left_sub_array_sum = 0;
    for (i = 0; i < n; i++)
    {
        left_sub_array_sum = left_sub_array_sum + array[i];
        int right_sub_array_sum = 0;
        for (j = i + 1; j < n; j++)
        {
            right_sub_array_sum = right_sub_array_sum + array[j];
        }
        if (left_sub_array_sum == right_sub_array_sum)
        {
            return i + 1;
        }
    }
    return -1;
}