class Solution {
public:

    int bs(vector<vector<int>>& matrix, int target, int low, int high)
    {
        while(low<high)
        {
            int mid = low + (high - low + 1) / 2;
            if(matrix[mid][0]==target) return mid;
            else if(matrix[mid][0]<target) low=mid;
            else high= mid-1;
        }
        return low;
    }


    bool searchMatrix(vector<vector<int>>& matrix, int target) 
    {

        int n= matrix.size();
        int m= matrix[0].size();

        int low1=0;
        int high1=n-1;

        int row= bs(matrix,target,low1,high1);
    
        return binary_search(matrix[row].begin(), matrix[row].end(), target);

    }
};
