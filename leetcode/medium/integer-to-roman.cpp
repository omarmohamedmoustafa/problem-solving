/**
 *
    Symbol	Value
    I	    1
    V	    5
    X	    10
    L	    50
    C	    100
    D	    500
    M	    1000

 *
 */
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Solution
{
public:
    string intToRoman(int num)
    {
        string result;
        vector<int> values = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        vector<string> symbols = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        for (int i = 0; i < values.size(); ++i)
        {
            while (num >= values[i])
            {
                result += symbols[i];
                num -= values[i];
            }
        }
        return result;
    }
};
