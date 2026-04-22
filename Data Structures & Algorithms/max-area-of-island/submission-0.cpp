class Solution {
public:

    void dfs(vector<vector<int>>& grid,vector<vector<bool>>& vis, int i, int j,int &count)
    {
        int n= grid.size();
        int m= grid[0].size();

        if(i<0 || j<0 || i>=n || j>=m || grid[i][j]==0 || vis[i][j]) return;
        vis[i][j]=true;
        cout<<"entered ";
        count+=1;
        dfs(grid,vis,i+1,j,count);
         dfs(grid,vis,i,j+1,count);
          dfs(grid,vis,i-1,j,count);
           dfs(grid,vis,i,j-1,count);
    }


    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        int n= grid.size();
        int m= grid[0].size();        
        vector<vector<bool>> vis(n,vector<bool>(m,false));
        int count=0;
        int maxi=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                count=0;
                if(!vis[i][j] && grid[i][j]==1)
                {
                    cout<<"dfs tried";
                    dfs(grid,vis,i,j,count);
                }
                maxi=max(maxi,count);
            }
        }

        return maxi;

    }
};
