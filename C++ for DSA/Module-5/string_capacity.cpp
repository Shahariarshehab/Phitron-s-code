#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "hello world";
    cout << s.size() << endl;
    cout << s.max_size() << endl;
    cout << s.capacity() << endl;
    s.resize(15,'x');
    cout << s << endl;
    s.clear();
    if (s.empty() == true)
    {
        cout << "Empty" << endl;
    }
    else
    {
        cout << "Not Empty" << endl;
    }
    return 0;
}