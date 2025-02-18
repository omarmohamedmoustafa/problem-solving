#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    cin >> q;
    int ops;
    int data;
    stack<int> A;
    stack<int> B;
    for (int i = 0; i < q; i++)
    {
        cin >> ops;
        if (ops == 1)
        {
            cin >> data;
            A.push(data);
        }
        else if (ops == 2)
        {
            if (B.size())
            {
                B.pop();
            }
            else
            {
                while (A.size())
                {
                    B.push(A.top());
                    A.pop();
                }
                B.pop();
            }
        }
        else if (ops == 3)
        {
            if (B.size())
                cout << B.top() << endl;
            else
            {
                while (A.size())
                {
                    B.push(A.top());
                    A.pop();
                }
                cout << B.top() << endl;
            }
        }
    }
    return 0;
}
