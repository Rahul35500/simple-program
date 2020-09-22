#include <iostream>
using namespace std;
void display(int num[], int start, int end);
void LONGESTSUBSTRING(int num[], int n);
int main()
{
    int num[100], i, n;
    cout << "Enter the size of the array:\n";
    cin >> n;
    cout << "Enter the array of the num:\n";
    {
        for (i = 0; i < n; i++)
        {
            cin >> num[i];
        }
    }
    LONGESTSUBSTRING(num, n);
}
void LONGESTSUBSTRING(int num[], int n)
{
    int len = 1, current_pos = 1, end_indexing = 0, i;
    int data;

    for (i = 1; i < n; i++)
    {
        if (num[i] * num[i - 1] < 0)
        {
            current_pos++;
            if (current_pos > len)
            {
                len = current_pos;
                end_indexing = i;
                //cout<<"end_indexing:"<<end_indexing;
                // cout<<"len:"<<len;
            }
        }
        else
        {
            current_pos = 1;
        }
    }
    //cout<<"Ed:"<<end_indexing<<endl;
    //cout<<"len"<<len<<endl;
    //data=(6-4+1);
    // data=(end_indexing-len+1);
    // cout<<"data"<<data;
    cout << "The alternating substring are:\n";
    display(num, (end_indexing - len + 1), end_indexing);
}
void display(int num[], int start, int end)
{
    int k;
    // cout<<"start"<<start<<endl;
    //cout<<"end"<<end<<endl;
    cout << "{";
    for (k = start; k < end; k++)
    {
        // cout<<"K"<<num[k]<<endl;
        cout << num[k] << ","; //<<endl;
    }
    cout << num[end] << "}";
}