#include <iostream>
#include <stack>
using namespace std;
class paranthesis
{
public:
    bool paranthesisFor(string s)
    {
        bool Result;
        stack<int> st;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(')
            {
                s.push_back(i);
            }
            else if (s[i] == ')')
            {
                if (!st.empty())
                {
                    st.pop();
                }
                else
                {
                    s[i] = '*';
                }
            }
        }
        while (!st.empty())
        {
            s[st.top()] = '*';
            st.pop();
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '*')
            {
                Result = true;
            }
        }
        return Result;
    }
};
int main()
{
    paranthesis obj;
   int a= obj.paranthesisFor("a)b(c)d)");
    if (a==0)
    {
        cout << "False:"<<"\n"<<"This string have some additional brackets";
    }
    else
    {
        cout << "True:"<<"\n"<<"This string does not have additional brackets";
    }
}