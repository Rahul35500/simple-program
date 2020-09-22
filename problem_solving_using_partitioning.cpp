#include<iostream>
using namespace std;
int negative_positive_partitioning(int array[],int n);
int main()
{
    int array[100],i,n;
    cout<<"Enter the size of the array:";
    cin>>n;
    cout<<"Enter the array of the list:";
    for(i=0;i<n;i++)
    {
        cin>>array[i];
    }
    negative_positive_partitioning(array,n);
    cout<<"Array are arranging :\n";
    for(i=0;i<n;i++)
    {
        cout<<array[i]<<" ";
    }
}
int negative_positive_partitioning(int array[],int n)
{
    int i,d;
    int index=0;
    int pivot=0;
    for(i=0;i<n;i++)
    {
        if(array[i]<pivot)
        {
            int d=array[i];
            array[i]=array[index];
            array[index]=d;
            index++;
        }
    }
}
