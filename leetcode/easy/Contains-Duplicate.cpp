class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        bool res = false;
        sort(nums.begin(), nums.end());
        if (nums.size() >= 2)
        {
            for (int i = 0; i < nums.size() - 1; i++)
            {
                if (nums[i] == nums[i + 1])
                {
                    res = true;
                    break;
                }
                else
                    res = false;
            }
        }
        return res;
    }
};