#include <bits/stdc++.h>
using namespace std;
int main()
{
    list<int> l = {1, 2, 3};
    ;
    list<int> l2;
    l2 = l;
    for (int val : l2)
    {
        cout << val << endl;
    }
    return 0;
}