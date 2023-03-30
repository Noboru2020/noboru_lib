---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: zatu/template/template_func.hpp
    title: zatu/template/template_func.hpp
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
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
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
  - verify-code/yosupojudge/graph/dijkstra-verify.cpp
  - graph/template/weightedgraph.hpp
  - graph/shortest-path/dijkstra.hpp
  timestamp: '2023-03-30 14:37:37+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: zatu/benri.hpp
layout: document
redirect_from:
- /library/zatu/benri.hpp
- /library/zatu/benri.hpp.html
title: zatu/benri.hpp
---
