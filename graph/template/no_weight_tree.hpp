#pragma once
#include "../../zatu/benri.hpp"
template<class T = int>struct no_weight_tree{
    std::vector<std::vector<T>>no_weight_tree_graph;
    no_weight_tree(int N):no_weight_tree_graph(N){};
    void build__noweight_tree_input_edge(bool one_indexed,bool twoway){
        int M=no_weight_tree_graph.size();
        for(int i=0;i<M-1;i++){
            int a,b;cin>>a>>b;
            if(one_indexed){
                a--;b--;
            }
            no_weight_tree_graph[a].push_back(b);
            if(twoway)no_weight_tree_graph[b].push_back(a);
        }
    }
};