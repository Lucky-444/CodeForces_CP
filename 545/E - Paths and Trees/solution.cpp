#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll INF = 1e18;
const int MAXN = 300005;
 
struct Edge
{
    int to;     // destination vertex
    int w;      // edge weight
    int id;     // edge number in input
};
 
int n, m, s;
 
// Graph
vector<Edge> graph[MAXN];
 
// Store all edges separately
struct InputEdge
{
    int u, v, w, id;
};
 
vector<InputEdge> edges;
 
// Shortest distances
ll dist[MAXN];
 
// Parent edge of every vertex
int parentEdge[MAXN];
 
// Weight of parent edge
int parentWeight[MAXN];
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    cin >> n >> m;
 
    for(int i = 1; i <= m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
 
        graph[u].push_back({v,w,i});
        graph[v].push_back({u,w,i});
 
        edges.push_back({u,v,w,i});
    }
 
    cin>>s;
 
    //------------------------------------------------
    // Dijkstra
    //------------------------------------------------
 
    for(int i=1;i<=n;i++)
        dist[i]=INF;
 
    priority_queue<
        pair<ll,int>,
        vector<pair<ll,int>>,
        greater<pair<ll,int>>
    > pq;
 
    dist[s]=0;
 
    pq.push({0,s});
 
    while(!pq.empty())
    {
        auto cur=pq.top();
        pq.pop();
 
        ll d=cur.first;
        int u=cur.second;
 
        // Ignore outdated entry
        if(d!=dist[u])
            continue;
 
        for(auto e:graph[u])
        {
            int v=e.to;
 
            if(dist[v]>dist[u]+e.w)
            {
                dist[v]=dist[u]+e.w;
 
                pq.push({dist[v],v});
            }
        }
    }
 
    //----------------------------------------
    // Greedy reconstruction
    //----------------------------------------
 
    for(int i=1;i<=n;i++)
        parentWeight[i]=INT_MAX;
 
    for(auto e:edges)
    {
        int u=e.u;
        int v=e.v;
        int w=e.w;
 
        if(dist[u]+w==dist[v])
        {
            if(w<parentWeight[v])
            {
                parentWeight[v]=w;
                parentEdge[v]=e.id;
            }
        }
 
        if(dist[v]+w==dist[u])
        {
            if(w<parentWeight[u])
            {
                parentWeight[u]=w;
                parentEdge[u]=e.id;
            }
        }
    }
 
    //----------------------------------------
    // Calculate answer
    //----------------------------------------
 
    ll sum=0;
 
    for(int i=1;i<=n;i++)
    {
        if(i==s)
            continue;
 
        sum+=parentWeight[i];
    }
 
    cout<<sum<<"
";
 
    for(int i=1;i<=n;i++)
    {
        if(i==s)
            continue;
 
        cout<<parentEdge[i]<<" ";
    }
}