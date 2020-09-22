#include <iostream>
using namespace std;
int main()
{
    int n, i, j, row;
    int k ;
    int space;
    cout << "Enter the number of the row:";
    cin >> row;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= row - i; j++)
        {
            cout <<"  ";
        }
       for(k=0;k!=2*i-1;k++)
       {
           cout<<"* ";
       }
        cout << endl;
    }
}