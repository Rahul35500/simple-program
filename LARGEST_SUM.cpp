#include <iostream>
void LARGESTSUMNUMBER(int number[], int n);
using namespace std;
int main()
{
    int number[100], i, n;
    cout << "Enter the size of the array\n";
    cin >> n;
    cout << "Enter the array of the number:\n";
    for (i = 0; i < n; i++)
    {
        cin >> number[i];
    }
    LARGESTSUMNUMBER(number, n);
}
void LARGESTSUMNUMBER(int number[], int n)
{
    int max_number = 0;
    int i;
    int first = INT32_MIN;
    int second = INT32_MIN;
    for (i = 0; i < n; i++)
    {
        // second = first;
        max_number = max_number + number[i];
        if (first < max_number)
        {
            second = first;
            first = max_number;
        }
        else if (max_number > second &&
                 max_number != first)
        {
            second = max_number;
        }
        if (max_number < number[i])
        {
            max_number = number[i];
        }
    }
    cout << "The first maximum contiguous is:" << first << endl;
    cout << "The second maximum contiguous is:" << second;
}