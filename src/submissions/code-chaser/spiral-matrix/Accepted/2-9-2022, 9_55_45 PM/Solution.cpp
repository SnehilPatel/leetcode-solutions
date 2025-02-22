// https://leetcode.com/problems/spiral-matrix

/*
~~~~~~~~~~~~~~~~~~~~~~~~~~~
--||author : codechaser||--
~~~~~~~~~~~~~~~~~~~~~~~~~~~
*/
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> ans;
        int m = matrix.size();
        if (m == 0)
            return ans;
        int n = matrix[0].size();
        if (n == 0)
            return ans;
        int top = 0, bottom = m - 1, left = 0, right = n - 1;
        while (top < bottom && left < right)
        {
            for (int i = left; i < right; i++)
                ans.push_back(matrix[top][i]);
            for (int i = top; i < bottom; i++)
                ans.push_back(matrix[i][right]);
            for (int i = right; i > left; i--)
                ans.push_back(matrix[bottom][i]);
            for (int i = bottom; i > top; i--)
                ans.push_back(matrix[i][left]);
            top++;
            bottom--;
            left++;
            right--;
        }
        if (top == bottom && left == right)
        {
            ans.push_back(matrix[top][left]);
        }
        else if (top == bottom)
        {
            for (int i = left; i <= right; i++)
            {
                ans.push_back(matrix[top][i]);
            }
        }
        else if (left == right)
        {
            for (int i = top; i <= bottom; i++)
            {
                ans.push_back(matrix[i][left]);
            }
        }
        return ans;
    }
};
/*
    |---------------------------------------------------|
    |||   https://codeforces.com/profile/codechaser   |||
    |||   https://www.codechef.com/users/codechaser   |||
    |||        https://github.com/code-chaser         |||
    |---------------------------------------------------|
*/