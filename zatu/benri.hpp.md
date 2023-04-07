---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: zatu/template/template_func.hpp
    title: zatu/template/template_func.hpp
  _extendedRequiredBy:
  - icon: ':x:'
    path: graph/shortest-path/dijkstra.hpp
    title: graph/shortest-path/dijkstra.hpp
  - icon: ':x:'
    path: graph/template/weightedgraph.hpp
    title: graph/template/weightedgraph.hpp
  _extendedVerifiedWith:
  - icon: ':x:'
    path: verify-code/yosupojudge/graph/dijkstra.test.cpp
    title: verify-code/yosupojudge/graph/dijkstra.test.cpp
  _isVerificationFailed: true
  _pathExtension: hpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: '#line 2 "zatu/benri.hpp"

    #include<bits/stdc++.h>

    #line 3 "zatu/template/template_func.hpp"

    template<typename T,typename U>

    inline bool chmin(T &a,const U &b){return (a>b?a=b,true:false);}

    template<typename T,typename U>

    inline bool chmax(T &a,const U &b){return (a<b?a=b,true:false);}

    #line 4 "zatu/benri.hpp"

    using ll = long long;

    '
  code: '#pragma once

    #include<bits/stdc++.h>

    #include "template/template_func.hpp"

    using ll = long long;'
  dependsOn:
  - zatu/template/template_func.hpp
  isVerificationFile: false
  path: zatu/benri.hpp
  requiredBy:
  - graph/shortest-path/dijkstra.hpp
  - graph/template/weightedgraph.hpp
  timestamp: '2023-04-08 00:06:57+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - verify-code/yosupojudge/graph/dijkstra.test.cpp
documentation_of: zatu/benri.hpp
layout: document
redirect_from:
- /library/zatu/benri.hpp
- /library/zatu/benri.hpp.html
title: zatu/benri.hpp
---
