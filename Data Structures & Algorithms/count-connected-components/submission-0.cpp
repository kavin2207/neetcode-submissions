class Solution {
public:
    void dfs(vector<vector<int>>& graph, int parent, vector<bool>& visited){
        visited[parent]  = true;
        for(auto nbr: graph[parent]){
            if(!visited[nbr]){
                dfs(graph,nbr,visited);
            }
        }
    }
    int countComponents(int n, vector<vector<int>>& edges) {
        vector<vector<int>> graph(n);
        for(int i=0;i<edges.size();i++){
            int a = edges[i][0];
            int b = edges[i][1];
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
        vector<bool> vis(n,false);
        int count = 0;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                dfs(graph,i,vis);
                count++;
            }
        }
        return count;

    }
};
