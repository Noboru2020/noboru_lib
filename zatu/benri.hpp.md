---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: zatu/template/template_func.hpp
    title: zatu/template/template_func.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: graph/shortest-path/dijkstra.hpp
    title: graph/shortest-path/dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: graph/template/weightedgraph.hpp
    title: graph/template/weightedgraph.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify-code/yosupojudge/graph/dijkstra.test.cpp
    title: verify-code/yosupojudge/graph/dijkstra.test.cpp
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"zatu/benri.hpp\"\n#include<bits/stdc++.h>\n#line 3 \"zatu/template/template_func.hpp\"\
    \ntemplate<typename T,typename U>\ninline bool chmin(T &a,const U &b){return (a>b?a=b,true:false);}\n\
    template<typename T,typename U>\ninline bool chmax(T &a,const U &b){return (a<b?a=b,true:false);}\n\
    #line 4 \"zatu/benri.hpp\"\nusing ll = long long;\nconst ll llmx_0 = 1152921504606846976;\n\
    using namespace std;\ntemplate<typename T>\nostream &operator<<(ostream &os,const\
    \ vector<T>&v) {\n    for(int i=0;i<(int)v.size();i++) {\n        os<<v[i]<<(i!=(int)v.size()-1?\"\
    \ \" : \"\");\n    }\n    return os;\n}\ntemplate<typename T>\nistream &operator>>(istream\
    \ &is,vector<T>&v) {\n    for(T &in:v)is>>in;\n    return is;\n}\n"
  code: "#pragma once\n#include<bits/stdc++.h>\n#include \"template/template_func.hpp\"\
    \nusing ll = long long;\nconst ll llmx_0 = 1152921504606846976;\nusing namespace\
    \ std;\ntemplate<typename T>\nostream &operator<<(ostream &os,const vector<T>&v)\
    \ {\n    for(int i=0;i<(int)v.size();i++) {\n        os<<v[i]<<(i!=(int)v.size()-1?\"\
    \ \" : \"\");\n    }\n    return os;\n}\ntemplate<typename T>\nistream &operator>>(istream\
    \ &is,vector<T>&v) {\n    for(T &in:v)is>>in;\n    return is;\n}"
  dependsOn:
  - zatu/template/template_func.hpp
  isVerificationFile: false
  path: zatu/benri.hpp
  requiredBy:
  - graph/shortest-path/dijkstra.hpp
  - graph/template/weightedgraph.hpp
  timestamp: '2023-04-09 13:40:17+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify-code/yosupojudge/graph/dijkstra.test.cpp
documentation_of: zatu/benri.hpp
layout: document
redirect_from:
- /library/zatu/benri.hpp
- /library/zatu/benri.hpp.html
title: zatu/benri.hpp
---
