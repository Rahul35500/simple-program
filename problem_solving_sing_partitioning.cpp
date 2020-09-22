#include<iostream>
#include<algorithm>
using namespace std;
int partition(int array[],int n);
int main()
{
    int array[100],i,n;
    cout<<"Enter the size of the array:\n";
    cin>>n;
    cout<<"Enter the list of the array are:";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    partition(array,n);
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }

}
int partition(int array[],int n)
{
    int i;
    int pivot=1;
    int pindex=0;
    for(i=0;i<n;i++)
    {
        if(array[i]<pivot)
        {
            swap(array[i],array[pindex]);
            pindex++;
        }
    }
}