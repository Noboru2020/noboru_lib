---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: graph/shortest-path/dijkstra.hpp
    title: graph/shortest-path/dijkstra.hpp
  - icon: ':warning:'
    path: graph/template/weightedgraph.hpp
    title: graph/template/weightedgraph.hpp
  - icon: ':warning:'
    path: verify-code/yosupojudge/graph/dijkstra-verify.cpp
    title: verify-code/yosupojudge/graph/dijkstra-verify.cpp
  - icon: ':warning:'
    path: zatu/benri.hpp
    title: zatu/benri.hpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
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
  - zatu/benri.hpp
  - verify-code/yosupojudge/graph/dijkstra-verify.cpp
  - graph/template/weightedgraph.hpp
  - graph/shortest-path/dijkstra.hpp
  timestamp: '2023-03-30 14:37:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: zatu/template/template_func.hpp
layout: document
redirect_from:
- /library/zatu/template/template_func.hpp
- /library/zatu/template/template_func.hpp.html
title: zatu/template/template_func.hpp
---
