#include <iostream>
#include <string>
using namespace std;
int ANAGRAMS(string name1, string name2);
int main()
{
    string name1, name2;
    cout << "Enter the first string :\n";
    getline(cin, name1);
    cout << "Enter the second string:\n";
    getline(cin, name2);
    if (ANAGRAMS(name1, name2))
    {
        cout << "The both string are anagram:";
    }
    else
    {
        cout << "The both string are not anagram:";
    }
}
int ANAGRAMS(string name1, string name2)
{
    int arr1[26] = {0};
    int i, j;
    int arr2[26] = {0};
    int length1, length2;
    length1 = name1.length();
    length2 = name2.length();
    if (length1 != length2)
    {
        return 0;
    }
    else
    {
        for (i = 0; i < length1; i++)
        {
            arr1[name1[i] - 'a']++;
        }
        for (i = 0; i < length2; i++)
        {
            arr2[name2[i] - 'a']++;
        }
        for (i = 0; i < 26; i++)
        {
            if (arr1[i] != arr2[i])
            {
                return 0;
            }
        }
    }
    return 1;
}
