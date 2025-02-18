#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    string s1 = "";
    string s2;
    int q;
    cin >> q;
    int op;
    stack<string> results;
    for (int i = 0; i < q; i++)
    {
        cin >> op;
        if (op == 1)
        {
            cin >> s2;
            results.push(s1);
            s1 += s2;
        }
        else if (op == 2)
        {
            results.push(s1);
            int delLastN;
            cin >> delLastN;
            s1.erase(s1.length() - delLastN);
        }
        else if (op == 3)
        {
            int charIndxToDisplay;
            cin >> charIndxToDisplay;
            cout << s1[charIndxToDisplay - 1] << '\n';
        }
        else if (op == 4)
        {
            s1 = move(results.top());
            results.pop();
        }
    }
    return 0;
}
