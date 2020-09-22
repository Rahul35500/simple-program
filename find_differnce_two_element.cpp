#include <iostream>
using namespace std;
void differnce(int arr[], int n);
int main()
{
    int n, i, arr[100];
    cout << "Enter the number of the arry\n";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    differnce(arr, n);
}
void differnce(int arr[], int n)
{
    int i, j, data, data2, data3, data4;
    int max = INT32_MIN;
    int min = INT32_MAX;
    // cout<<max<<endl;
    //cout<<min<<endl;
    for (i = 0; i < n - 1; i++)
    {
        //cout<<"data\n";
        for (j = i + 1; j < n; j++)
        {
            // cout<<"data2\n";
            if (abs(arr[i] - arr[j]) < min)
            {
                min = abs(arr[i] - arr[j]);
                data = arr[i];
                data2 = arr[j];

                // cout<<"min"<<min;
            }
            else if (abs(arr[j] - arr[i]) > max)
            {
                max = abs(arr[j] - arr[i]);
                data3 = arr[j];
                data4 = arr[i];
                // cout<<"max"<<max;
            }
        }
    }
    cout << "Maximum :" << max << endl;
    cout << "index of the maximum are :" << data3 << "-" << data4 << endl;
    cout << "Minimum:" << min << endl;
    cout << "index of the minimum are:" << data << "-" << data2;
}