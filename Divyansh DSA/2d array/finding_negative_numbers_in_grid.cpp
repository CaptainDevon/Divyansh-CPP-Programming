#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int countNegatives(vector<vector<int>> &grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[i].size(); j++)
            {
                if (grid[i][j] < 0)
                    count++;
            }
        }
        return count;
    }
};

int main()
{
    vector<vector<int>>grid={{4,3,2,-1},{3,2,1,-1},{1,1,-1,-2},{-1,-1,-2,-3}};
    Solution s;
    cout<<s.countNegatives(grid);
    return 0;
}