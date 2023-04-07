#define PROBLEM "https://judge.yosupo.jp/problem/shortest_path"
#include "../../../graph/shortest-path/dijkstra.hpp"
#include "../../../zatu/benri.hpp"
using namespace std;
int main(){
    int N,M,s,t;cin>>N>>M>>s>>t;
    graph_w<ll>WG(N),RG(N);
    for(int i=0;i<M;i++){
        int a,b;ll c;cin>>a>>b>>c;
        weight_edge<ll>e(b,c);
        WG[a].push_back(e);
        e.to=a;
        RG[b].push_back(e);
    }
    vector<ll>D=dijkstra(WG,s);
    cout<<D[t]<<endl;
    if(D[t]==9223372036854775807){
        puts("-1");return 0;
    }
    vector<pair<int,int>>ans;
    vector<bool>seen(N,false);
    int nowv=t;
    seen[nowv]=true;
    while(nowv!=s){
        for(auto e:RG[nowv]){
            if(!seen[e.to]&&D[e.to]+e.cost==D[nowv]){
                ans.push_back({e.to,nowv});
                seen[e.to]=true;
                nowv=e.to;
                break;
            }
        }
    }
    reverse(ans.begin(),ans.end());
    cout<<D[t]<<" "<<ans.size()<<endl;
    for(auto [a,b]:ans)cout<<a<<" "<<b<<endl;
}