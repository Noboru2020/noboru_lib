---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':x:'
    path: graph/shortest-path/dijkstra.hpp
    title: graph/shortest-path/dijkstra.hpp
  - icon: ':x:'
    path: graph/template/weightedgraph.hpp
    title: graph/template/weightedgraph.hpp
  - icon: ':x:'
    path: zatu/benri.hpp
    title: zatu/benri.hpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify-code/yosupojudge/graph/dijkstra.test.cpp
    title: verify-code/yosupojudge/graph/dijkstra.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
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
  - graph/shortest-path/dijkstra.hpp
  - graph/template/weightedgraph.hpp
  - zatu/benri.hpp
  timestamp: '2023-03-30 14:37:37+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify-code/yosupojudge/graph/dijkstra.test.cpp
documentation_of: zatu/template/template_func.hpp
layout: document
redirect_from:
- /library/zatu/template/template_func.hpp
- /library/zatu/template/template_func.hpp.html
title: zatu/template/template_func.hpp
---
