//Separate even and odd numbers of an array of integers. Put all even numbers first, and then odd numbers//
#include <iostream>
void arrange(int nums[], int n);
using namespace std;

int main()
{
    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
    int n = sizeof(nums) / sizeof(nums[0]);
    arrange(nums, n);
}
void arrange(int nums[], int n)
{
    int temp1[n];
    int temp2[n];
    int j = 0;
    int k = -1;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 == 0)
        {
            temp1[j] = nums[i];
            j++;
           // cout << "J" << j<<endl;
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (nums[i] % 2 != 0)
        {
            k++;
            //cout<<nums[i]<<endl;
            temp2[k] = nums[i];
            //cout<<"Temp1 "<<temp2[k]<<endl;
          // cout << "k" << k<<endl;
        }
    }
    int b=0;
    for(int d=j;d<n;d++)
    {
        temp1[d]=temp2[b];
       // cout<<"temp1: "<<temp1[d]<<endl;
        b++;
        //cout<<"b "<<b<<endl;
    }
    cout<<"After separte the even and odd in alternate side: {";
    for(int f=0;f<n;f++)
    {
        cout<<temp1[f]<<",";
    }
    cout<<"}";
 }
