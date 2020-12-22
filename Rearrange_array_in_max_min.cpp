//Question::Rearrange a given sorted array of positive integers//
#include <iostream>
#include<algorithm>
void rearrange_array_max_min_order(int array[],int n);
using namespace std;
int main()

{
    int n;
    cout<<"Enter the size of the array:";
    cin>>n;
    int array[n];
    cout<<"Enter the elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    rearrange_array_max_min_order(array,n);
}
void rearrange_array_max_min_order(int array[],int n)
{
    bool result=true;
    int last=n-1;
    int first=0;
    int array2[n];
    for(int i=0;i<n;i++)
    {
        if(result){
            array2[i]=array[last];
            last--;
        }
        else
        {
            array2[i]=array[first];
            first++;
        }
        result=!result;
    }
    int size=sizeof(array2)/sizeof(array2[0]);
    cout<<"After the rearranging the array in max and min form:"
    <<"{";
    for(int j=0;j<size;j++)
    {
        cout<<array2[j]<<",";
    }
    cout<<"}";

}