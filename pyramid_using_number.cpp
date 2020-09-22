#include <iostream>
using namespace std;

int main()
{
    int rows, count = 0, count1 = 0, k = 0;

    cout << "Enter number of rows: ";
    cin >> rows;

    for(int i = 1; i <= rows; ++i)
    {
        for(int space = 1; space <= rows-i; ++space)
        {
            cout<<"count1:"<<count<<endl;
            cout << "  ";
            ++count;
             cout<<"count2:"<<count<<endl;
        }

        while(k != 2*i-1)
        {
            if (count <= rows-1)
            {
               cout<<"count3:"<<count<<endl;
                cout << i+k << " "<<endl;
                ++count;
            }
            else
            {
                cout<<"countier1:"<<count1<<endl;
                ++count1;
                cout << i+k-2*count1 << " "<<endl;
                 cout<<"countier2:"<<count1<<endl;
            }
            ++k;
        }
        count1 = count = k = 0;

        cout << endl;
    }
    return 0;
}