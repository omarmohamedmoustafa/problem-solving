class Solution
{
public:
    bool canFinish(int numCourses, vector<vector<int>> &prerequisites)
    {
        vector<int> inDegree(numCourses, 0);
        vector<vector<bool>> Graph(numCourses, vector<bool>(numCourses, false));
        int x = prerequisites.size();
        for (int i = 0; i < x; i++)
        {
            int c1 = prerequisites[i][0];
            int c2 = prerequisites[i][1];
            inDegree[c1]++;
            Graph[c2][c1] = true;
        }
        int y = inDegree.size();
        queue<int> myQueue;
        for (int i = 0; i < y; i++)
        {
            if (inDegree[i] == 0 && find(Graph[i].begin(), Graph[i].end(), true) != Graph[i].end())
                myQueue.push(i);
        }
        while (myQueue.size())
        {
            int temp = myQueue.front();
            myQueue.pop();
            int z = Graph[temp].size();
            for (int i = 0; i < z; i++)
            {
                if (Graph[temp][i] == true)
                {
                    inDegree[i]--;
                    if (inDegree[i] == 0)
                        myQueue.push(i);
                }
            }
        }
        int cnt = inDegree.size();
        for (int i = 0; i < cnt; i++)
        {
            if (inDegree[i] != 0)
                return false;
        }
        return true;
    }
};