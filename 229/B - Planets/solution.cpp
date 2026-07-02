#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const ll INF = 1e18;
const int MAXN = 100005;
 
vector<pair<int,int>> graph[MAXN];
vector<int> forbid[MAXN];
 
ll dista[MAXN];
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n,m;
    cin>>n>>m;
 
    for(int i=0;i<m;i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
 
        graph[u].push_back({v,w});
        graph[v].push_back({u,w});
    }
 
    for(int i=1;i<=n;i++)
    {
        int k;
        cin>>k;
 
        forbid[i].resize(k);
 
        for(int j=0;j<k;j++)
            cin>>forbid[i][j];
    }
 
    for(int i=1;i<=n;i++)
        dista[i]=INF;
 
    priority_queue<
        pair<ll,int>,
        vector<pair<ll,int>>,
        greater<pair<ll,int>>
    > pq;
 
    dista[1]=0;
    pq.push({0,1});
 
    while(!pq.empty())
    {
        auto cur=pq.top();
        pq.pop();
 
        ll d=cur.first;
        int u=cur.second;
 
        if(d!=dista[u])
            continue;
 
        // Earliest time we can leave planet u
        ll leave=d;
 
        for(int t:forbid[u])
        {
            if(t<leave)
                continue;
 
            if(t==leave)
                leave++;
            else
                break;
        }
 
        for(auto e:graph[u])
        {
            int v=e.first;
            int w=e.second;
 
            if(dista[v]>leave+w)
            {
                dista[v]=leave+w;
                pq.push({dista[v],v});
            }
        }
    }
 
    if(dista[n]==INF)
        cout<<-1<<"
";
    else
        cout<<dista[n]<<"
";
 
    return 0;
}