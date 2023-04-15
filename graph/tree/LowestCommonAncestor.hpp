#pragma once
#include "../template/no_weight_tree.hpp"
#include "../../zatu/benri.hpp"
struct LCA{
    std::vector<std::vector<int>>parent;
    std::vector<int>dis;
    LCA(const no_weight_tree<int> &G,int root=0){
        int N=G.no_weight_tree_graph.size(),K=1;
        while((1<<K)<N)K++;
        parent.assign(K+1,vector<int>(N,-1));
        dis.assign(N,-1);
        dfs(G,root,-1,0);
        for(int k=0;k<K-1;k++){
            for(int i=0;i<N;i++){
                if(parent[k][i]==-1)parent[k+1][i]=-1;
                else parent[k+1][i]=parent[k][parent[k][i]];
            }
        }
    }
    void dfs(const no_weight_tree<int> &G,int v,int pv,int d){
        parent[0][v]=pv;
        dis[v]=d;
        for(int nv:G.no_weight_tree_graph[v]){
            if(nv!=pv)dfs(G,nv,v,d+1);
        }
    }
    int get_lca(int a,int b){
        if(dis[a]<dis[b])swap(a,b);
        int K=parent.size();
        for(int k=0;k<K;k++){
            if(((dis[a]-dis[b])>>k)&1)a=parent[k][a];
        }
        if(a==b)return a;
        for(int k=K-1;k>=0;k--){
            if(parent[k][a]!=parent[k][b])a=parent[k][a],b=parent[k][b];
        }
        return parent[0][a];
    }
    int get_dist(int a,int b){
        return dis[a]+dis[b]-2*dis[get_lca(a,b)];
    }
};