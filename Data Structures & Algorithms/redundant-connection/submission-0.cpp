class Solution {
public:

    void dfs(int vertex,int parent, vector<vector<int>> &grid, vector<bool> &vis, bool &isloop)
    {
        vis[vertex]=true;

        for(auto &child: grid[vertex])
        {
            if(!vis[child])
            {
                dfs(child,vertex,grid,vis,isloop);
            } 
            
            else if(child!=parent)
            {isloop=true;}
            if(isloop)return;
        }
    }

    vector<int> findRedundantConnection(vector<vector<int>>& edges) 
    {
        int n = edges.size();
        vector<vector<int>> grid(n+1);

        for(int i=0; i<n; i++)
        {
            int u= edges[i][0];
            int v= edges[i][1];
            vector<bool> vis(n+1,false);
            bool isloop=false;

            grid[u].push_back(v);
            grid[v].push_back(u);

            dfs(u,-1,grid,vis,isloop);
            if(isloop)
            {
                return{u,v};
            }
        }

        return {};
    }
};
    