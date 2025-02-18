class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> stack1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[')
            {
                stack1.push(s[i]);
            }
            else
            {
                if (!stack1.size())
                    return false;
                if (s[i] == ')')
                {
                    if (stack1.top() == '(')
                        stack1.pop();
                    else
                        return false;
                }
                else if (s[i] == '}')
                {
                    if (stack1.top() == '{')
                        stack1.pop();
                    else
                        return false;
                }
                else if (s[i] == ']')
                {
                    if (stack1.top() == '[')
                        stack1.pop();
                    else
                        return false;
                }
                else
                {
                    return false;
                }
            }
        }
        if (stack1.size())
            return false;
        return true;
    }
};