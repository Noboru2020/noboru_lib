#define PROBLEM "https://judge.yosupo.jp/problem/lca"
#include "../../../graph/tree/LowestCommonAncestor.hpp"
#include "../../../zatu/benri.hpp"
using namespace std;
int main(){
    int N,Q;cin>>N>>Q;
    no_weight_tree<int>G(N);
    for(int i=1;i<N;i++){
        int a;cin>>a;
        G.no_weight_tree_graph[a].push_back(i);
    }
    LCA L(G);
    while(Q--){
        int a,b;cin>>a>>b;
        cout<<L.get_lca(a,b)<<endl;
    }
}