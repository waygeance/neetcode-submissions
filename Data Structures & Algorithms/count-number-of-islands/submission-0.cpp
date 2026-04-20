class Solution {
public:

    int dfs(vector<vector<char>>& grid, vector<vector<bool>>& vis, int i, int j)
    {
        int n= grid.size();
        int m= grid[0].size();
        if(i<0 || j<0) return 0;
        if(i>=n || j>=m) return 0;
        if(grid[i][j]=='0') return 0;
        if(vis[i][j]) return 0;
        vis[i][j]=true;
        
        dfs(grid,vis,i+1,j);
        dfs(grid,vis,i-1,j);
        dfs(grid,vis,i,j+1);
        dfs(grid,vis,i,j-1);
        //cout<<"entered"<<endl;;
        return 1;
    }

    int numIslands(vector<vector<char>>& grid) 
    {
        int n= grid.size();
        int m= grid[0].size();
        int count=0;

        vector<vector<bool>> vis(n,vector<bool>(m,false));
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                count+=dfs(grid,vis,i,j);
            }
        }

        return count;
    }
};
