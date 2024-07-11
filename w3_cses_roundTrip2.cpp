#include <bits/stdc++.h>
using namespace std;

class graph{
public:
    long long n, m;
    vector<vector<long long>> adj;
    vector<long long> parent;
    vector<bool> visited;
    vector<bool> in_stack;

    graph(){
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        cin >> n >> m;
        adj.resize(n);
        for (long long i = 0; i < m; ++i){
            long long a_i, b_i;
            cin >> a_i >> b_i;
            a_i--; b_i--;
            adj[a_i].push_back(b_i);
        }
        parent.resize(n, -1);
        visited.resize(n, false);
        in_stack.resize(n, false);
    }

    bool dfs(long long u, vector<long long>& cycle){
        visited[u] = true;
        in_stack[u] = true;

        for (long long v : adj[u]){
            if (!visited[v]) {
                parent[v] = u;
                if (dfs(v, cycle)){
                    return true;
                }
            } else if (in_stack[v]){
                for (long long x = u; x != v; x = parent[x]){
                    cycle.push_back(x);
                }
                cycle.push_back(v);
                cycle.push_back(u);
                reverse(cycle.begin(), cycle.end());
                return true;
            }
        }

        in_stack[u] = false;
        return false;
    }

    void find_cycle(){
        for (long long i = 0; i < n; ++i){
            if (!visited[i]){
                vector<long long> cycle;
                if (dfs(i, cycle)){
                    cout << cycle.size() << endl;
                    for (long long node : cycle){
                        cout << node + 1 << " ";
                    }
                    cout << endl;
                    return;
                }
            }
        }
        cout << "IMPOSSIBLE" << endl;
    }
};

int main(){
    graph g;
    g.find_cycle();
}