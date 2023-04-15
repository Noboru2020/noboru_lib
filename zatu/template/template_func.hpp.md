---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: graph/shortest-path/dijkstra.hpp
    title: graph/shortest-path/dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: graph/template/no_weight_tree.hpp
    title: graph/template/no_weight_tree.hpp
  - icon: ':heavy_check_mark:'
    path: graph/template/weighted_graph.hpp
    title: graph/template/weighted_graph.hpp
  - icon: ':heavy_check_mark:'
    path: graph/tree/LowestCommonAncestor.hpp
    title: graph/tree/LowestCommonAncestor.hpp
  - icon: ':heavy_check_mark:'
    path: zatu/benri.hpp
    title: zatu/benri.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify-code/yosupojudge/graph/LowestCommonAncestor.test.cpp
    title: verify-code/yosupojudge/graph/LowestCommonAncestor.test.cpp
  - icon: ':heavy_check_mark:'
    path: verify-code/yosupojudge/graph/dijkstra.test.cpp
    title: verify-code/yosupojudge/graph/dijkstra.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: '#line 2 "zatu/template/template_func.hpp"

    #include<bits/stdc++.h>

    template<typename T,typename U>

    inline bool chmin(T &a,const U &b){return (a>b?a=b,true:false);}

    template<typename T,typename U>

    inline bool chmax(T &a,const U &b){return (a<b?a=b,true:false);}

    '
  code: '#pragma once

    #include<bits/stdc++.h>

    template<typename T,typename U>

    inline bool chmin(T &a,const U &b){return (a>b?a=b,true:false);}

    template<typename T,typename U>

    inline bool chmax(T &a,const U &b){return (a<b?a=b,true:false);}

    '
  dependsOn: []
  isVerificationFile: false
  path: zatu/template/template_func.hpp
  requiredBy:
  - graph/tree/LowestCommonAncestor.hpp
  - graph/shortest-path/dijkstra.hpp
  - graph/template/no_weight_tree.hpp
  - graph/template/weighted_graph.hpp
  - zatu/benri.hpp
  timestamp: '2023-03-30 14:37:37+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify-code/yosupojudge/graph/LowestCommonAncestor.test.cpp
  - verify-code/yosupojudge/graph/dijkstra.test.cpp
documentation_of: zatu/template/template_func.hpp
layout: document
redirect_from:
- /library/zatu/template/template_func.hpp
- /library/zatu/template/template_func.hpp.html
title: zatu/template/template_func.hpp
---
