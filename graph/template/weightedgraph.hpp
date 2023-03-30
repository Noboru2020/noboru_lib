#pragma once
#include "../../zatu/benri.hpp"
template<class T = int>struct weight_edge{
    int from;
    int to;
    T cost;
    int idx;
    weight_edge(int t,const T &c)
    :to(t),cost(c){}
    weight_edge(int f,int t,const T &c,int i=-1)
    :from(f),to(t),cost(c),idx(i){}
    operator int() const{return to;}
};
template<class T=int>using graph_w=std::vector<std::vector<weight_edge<T>>>;