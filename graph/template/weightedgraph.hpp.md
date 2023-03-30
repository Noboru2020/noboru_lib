---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: zatu/benri.hpp
    title: zatu/benri.hpp
  - icon: ':warning:'
    path: zatu/template/template_func.hpp
    title: zatu/template/template_func.hpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: graph/shortest-path/dijkstra.hpp
    title: graph/shortest-path/dijkstra.hpp
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
    \    operator int() const{return to;}\n};\ntemplate<class T=int>using graph_w=std::vector<std::vector<weight_edge<T>>>;\n"
  code: "#pragma once\n#include \"../../zatu/benri.hpp\"\ntemplate<class T = int>struct\
    \ weight_edge{\n    int from;\n    int to;\n    T cost;\n    int idx;\n    weight_edge(int\
    \ t,const T &c)\n    :to(t),cost(c){}\n    weight_edge(int f,int t,const T &c,int\
    \ i=-1)\n    :from(f),to(t),cost(c),idx(i){}\n    operator int() const{return\
    \ to;}\n};\ntemplate<class T=int>using graph_w=std::vector<std::vector<weight_edge<T>>>;"
  dependsOn:
  - zatu/benri.hpp
  - zatu/template/template_func.hpp
  isVerificationFile: false
  path: graph/template/weightedgraph.hpp
  requiredBy:
  - verify-code/yosupojudge/graph/dijkstra-verify.cpp
  - graph/shortest-path/dijkstra.hpp
  timestamp: '2023-03-30 14:37:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/template/weightedgraph.hpp
layout: document
redirect_from:
- /library/graph/template/weightedgraph.hpp
- /library/graph/template/weightedgraph.hpp.html
title: graph/template/weightedgraph.hpp
---
