#include<iostream>
using namespace std;
void Runencoding(string name);
int main()
{
    string name;
    cout<<"Enter the string of the name:";
    getline(cin,name);
    cout<<"Encoding string are:"<<endl;
    Runencoding(name);


}
void Runencoding(string name)
{
    int arr[26]={0};
    int length,i,j;
    length=name.length();
    for(i=0;i<length;i++)
    {
        arr[name[i]-'a']++;
    }
    for(i=0;i<26;i++)
    {
        if(arr[i]!=0)
        {
            cout<<arr[i]<<rand()%122+97;
        }
    //     printf("result - %d%c",arr[i],'a'+i);
    //     printf("i=%d",i);
    //    // printf("D%d",arr[i]);
    //     }

 
    }
}

