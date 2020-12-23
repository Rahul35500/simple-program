#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
int main()
{
    vector<int> v{0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto sep = std::stable_partition(begin(v), end(v), [](int i) { return (i % 2 == 0); });
    for (auto i : v)
    {
        cout << i << endl;
    }
}