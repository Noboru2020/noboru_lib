---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: graph/template/weightedgraph.hpp
    title: graph/template/weightedgraph.hpp
  - icon: ':warning:'
    path: zatu/benri.hpp
    title: zatu/benri.hpp
  - icon: ':warning:'
    path: zatu/template/template_func.hpp
    title: zatu/template/template_func.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: verify-code/yosupojudge/graph/dijkstra-verify.cpp
    title: verify-code/yosupojudge/graph/dijkstra-verify.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"zatu/benri.hpp\"\n#include<bits/stdc++.h>\n#line 3 \"zatu/template/template_func.hpp\"\
    \ntemplate<typename T,typename U>\ninline bool chmin(T &a,const U &b){return (a>b?a=b,true:false);}\n\
    template<typename T,typename U>\ninline bool chmax(T &a,const U &b){return (a<b?a=b,true:false);}\n\
    #line 4 \"zatu/benri.hpp\"\nusing ll = long long;\n#line 3 \"graph/template/weightedgraph.hpp\"\
    \ntemplate<class T = int>struct weight_edge{\n    int from;\n    int to;\n   \
    \ T cost;\n    int idx;\n    weight_edge(int t,const T &c)\n    :to(t),cost(c){}\n\
    \    weight_edge(int f,int t,const T &c,int i=-1)\n    :from(f),to(t),cost(c),idx(i){}\n\
    \    operator int() const{return to;}\n};\ntemplate<class T=int>using graph_w=std::vector<std::vector<weight_edge<T>>>;\n\
    #line 4 \"graph/shortest-path/dijkstra.hpp\"\ntemplate<class T>std::vector<T>dijkstra(const\
    \ graph_w<T>&G,int s=0){\n    int N=G.size();\n    assert(0<=s&&s<N);\n    std::vector<T>dis(N,INFINITY/10);\n\
    \    dis[s]=0;\n    std::priority_queue<std::pair<T,int>,std::vector<std::pair<T,int>>,std::greater<std::pair<T,int>>>pq;\n\
    \    pq.emplace(0,s);\n    while(!pq.empty()){\n        auto [w,v]=pq.top();\n\
    \        pq.pop();\n        if(dis[v]!=w)continue;\n        for(weight_edge we:G[v]){\n\
    \            if(chmin(dis[we.to],w+we.cost))pq.emplace(dis[we.to],we.to);\n  \
    \      }\n    }\n    return dis;\n}\n"
  code: "#pragma once\n#include \"../template/weightedgraph.hpp\"\n#include \"../../zatu/benri.hpp\"\
    \ntemplate<class T>std::vector<T>dijkstra(const graph_w<T>&G,int s=0){\n    int\
    \ N=G.size();\n    assert(0<=s&&s<N);\n    std::vector<T>dis(N,INFINITY/10);\n\
    \    dis[s]=0;\n    std::priority_queue<std::pair<T,int>,std::vector<std::pair<T,int>>,std::greater<std::pair<T,int>>>pq;\n\
    \    pq.emplace(0,s);\n    while(!pq.empty()){\n        auto [w,v]=pq.top();\n\
    \        pq.pop();\n        if(dis[v]!=w)continue;\n        for(weight_edge we:G[v]){\n\
    \            if(chmin(dis[we.to],w+we.cost))pq.emplace(dis[we.to],we.to);\n  \
    \      }\n    }\n    return dis;\n}"
  dependsOn:
  - graph/template/weightedgraph.hpp
  - zatu/benri.hpp
  - zatu/template/template_func.hpp
  isVerificationFile: false
  path: graph/shortest-path/dijkstra.hpp
  requiredBy:
  - verify-code/yosupojudge/graph/dijkstra-verify.cpp
  timestamp: '2023-03-30 14:37:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/shortest-path/dijkstra.hpp
layout: document
redirect_from:
- /library/graph/shortest-path/dijkstra.hpp
- /library/graph/shortest-path/dijkstra.hpp.html
title: graph/shortest-path/dijkstra.hpp
---
