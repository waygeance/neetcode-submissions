class Solution {
public:
    void rotate(vector<vector<int>>& matrix) 
    {
        int n= matrix.size();
        int m= matrix[0].size();

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<i; j++)
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }

        for(int i=0; i<n; i++)
        {
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};

// 00 01 02 03
// 10 11 12 13
// 20 21 22 23
// 30 31 32 33

// 00 
// 01
// 02
// 03 
