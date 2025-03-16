class Solution
{
public:
    string reverseWords(string s)
    {
        string res = "";
        string word = "";
        int count = s.size(), iterator = 0;
        for (iterator = 0; iterator < count; iterator++)
        {
            if (s[iterator] == ' ')
                while(s[++iterator]==' ');
            while(iterator < count && s[iterator] != ' ')
            {
                word += s[iterator++];
            }
            res = word + " " + res;
            word = "";
        }
        res.pop_back();
        if (res[0] == ' ')
            res.erase(0, 1);
        return res;

    }
};

