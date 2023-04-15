#pragma once
#include "../template/weighted_graph.hpp"
#include "../../zatu/benri.hpp"
template<class T>std::vector<T>dijkstra(const graph_w<T>&G,int s=0){
    int N=G.size();
    assert(0<=s&&s<N);
    std::vector<T>dis(N,llmx_0);
    dis[s]=0;
    std::priority_queue<std::pair<T,int>,std::vector<std::pair<T,int>>,std::greater<std::pair<T,int>>>pq;
    pq.emplace(0,s);
    while(!pq.empty()){
        auto [w,v]=pq.top();
        pq.pop();
        if(dis[v]!=w)continue;
        for(weight_edge we:G[v]){
            if(chmin(dis[we.to],w+we.cost))pq.emplace(dis[we.to],we.to);
        }
    }
    return dis;
}