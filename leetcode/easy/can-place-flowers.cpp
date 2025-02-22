class Solution
{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n)
    {
        int size = flowerbed.size();
        int howManyICanPlace = 0;
        bool wasThePreviousAOne = false;

        for (int i = 0; i < size; i++)
        {
            if (flowerbed[i] == 0)
            {
                bool isPreviousEmpty = (i == 0 || flowerbed[i - 1] == 0);
                bool isNextEmpty = (i == size - 1 || flowerbed[i + 1] == 0);

                if (isPreviousEmpty && isNextEmpty)
                {
                    flowerbed[i] = 1;
                    howManyICanPlace++;
                }
            }
        }

        return howManyICanPlace >= n;
    }
};
