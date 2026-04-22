class Solution {
public:

    void dfs(vector<vector<int>> &grid,vector<bool> &vis,int vertex)
    {
        if(vis[vertex]) return;
        vis[vertex]=true;
        cout<<vertex<<" -> ";
        
        for(auto child: grid[vertex])
        {
            
            dfs(grid,vis,child);
        }

        
    }

    int countComponents(int n, vector<vector<int>>& edges) 
    {
        int m= edges.size();
        vector<vector<int>> grid(n);
        vector<bool> vis(n,false);
        int ans=0;

        for(int i=0; i<m; i++)
        {
            int v1=edges[i][0];
            int v2=edges[i][1];

            grid[v1].push_back(v2);
            grid[v2].push_back(v1);
        }

        for(auto it: grid)
        {
            cout<<endl;
            for(auto j: it)
            {
                cout<<j<<" ";
            }
        }

        for(int i=0; i<n; i++)
        {
            if(!vis[i])
            {
                ans++;
                dfs(grid,vis,i);
            }
        }

        return ans;
    }
};
