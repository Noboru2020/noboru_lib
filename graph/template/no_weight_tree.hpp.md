---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: zatu/benri.hpp
    title: zatu/benri.hpp
  - icon: ':heavy_check_mark:'
    path: zatu/template/template_func.hpp
    title: zatu/template/template_func.hpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: graph/tree/LowestCommonAncestor.hpp
    title: graph/tree/LowestCommonAncestor.hpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: verify-code/yosupojudge/graph/LowestCommonAncestor.test.cpp
    title: verify-code/yosupojudge/graph/LowestCommonAncestor.test.cpp
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
    \ &is,vector<T>&v) {\n    for(T &in:v)is>>in;\n    return is;\n}\n#line 3 \"graph/template/no_weight_tree.hpp\"\
    \ntemplate<class T = int>struct no_weight_tree{\n    std::vector<std::vector<T>>no_weight_tree_graph;\n\
    \    no_weight_tree(int N):no_weight_tree_graph(N){};\n    void build__noweight_tree_input_edge(bool\
    \ one_indexed,bool twoway){\n        int M=no_weight_tree_graph.size();\n    \
    \    for(int i=0;i<M-1;i++){\n            int a,b;cin>>a>>b;\n            if(one_indexed){\n\
    \                a--;b--;\n            }\n            no_weight_tree_graph[a].push_back(b);\n\
    \            if(twoway)no_weight_tree_graph[b].push_back(a);\n        }\n    }\n\
    };\n"
  code: "#pragma once\n#include \"../../zatu/benri.hpp\"\ntemplate<class T = int>struct\
    \ no_weight_tree{\n    std::vector<std::vector<T>>no_weight_tree_graph;\n    no_weight_tree(int\
    \ N):no_weight_tree_graph(N){};\n    void build__noweight_tree_input_edge(bool\
    \ one_indexed,bool twoway){\n        int M=no_weight_tree_graph.size();\n    \
    \    for(int i=0;i<M-1;i++){\n            int a,b;cin>>a>>b;\n            if(one_indexed){\n\
    \                a--;b--;\n            }\n            no_weight_tree_graph[a].push_back(b);\n\
    \            if(twoway)no_weight_tree_graph[b].push_back(a);\n        }\n    }\n\
    };"
  dependsOn:
  - zatu/benri.hpp
  - zatu/template/template_func.hpp
  isVerificationFile: false
  path: graph/template/no_weight_tree.hpp
  requiredBy:
  - graph/tree/LowestCommonAncestor.hpp
  timestamp: '2023-04-16 00:09:47+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify-code/yosupojudge/graph/LowestCommonAncestor.test.cpp
documentation_of: graph/template/no_weight_tree.hpp
layout: document
redirect_from:
- /library/graph/template/no_weight_tree.hpp
- /library/graph/template/no_weight_tree.hpp.html
title: graph/template/no_weight_tree.hpp
---
