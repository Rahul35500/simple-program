#include<iostream>
using namespace std;
void find_indexing(int array[],int n);
int main()
{
    int array[100],i,n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the number of the array:";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    find_indexing(array,n);
}
void find_indexing(int array[],int n)
{
    int left_sum=0;
    int i,total=0;
    for(i=1;i<n-1;i++)
    {
        total=total+array[i];
    }
    for(i=0;i<n;i++)
    {
        if(left_sum==total-(array[i]+left_sum))
        {
            cout<<"indexing are:"<<i;
        }
        left_sum=left_sum+array[i];
    }
}

