#include<iostream>
using namespace std;
int main()
{
    int i,j,Row;
    int k=1;
    cout<<"Enter the number of the row\n";
    cin>>Row;
    for(i=0;i<Row;i++)
    {
        for(j=0;j<=i;j++)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<"\n";
    }
}