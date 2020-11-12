#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
#include<algorithm>
#include<stack>
using std::stack;

string paranthesis(string s)
{
    stack<int>st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            st.push(i);
        }
        else if(s[i]==')')
        {
            if(!st.empty())
            {
                st.pop();
            }
            else
            {
                s[i]='*';
            }
            
        }
    }
    while(!st.empty())
    {
        s[st.top()]='*';
        //int value=st.pop();//<<endl;
       // cout<<"pop :"<<
        ///cout<<"data"<<
        st.pop();//<<endl;
    }
    string answer=" ";
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='*')
        {
            answer+=s[i];
            cout<<answer<<endl;

        }
    }
    return answer;
}
int main()
{
   cout<< paranthesis("a)b(c)d")<<endl;
  // cout<< paranthesis("(a(b(c)d)");

}