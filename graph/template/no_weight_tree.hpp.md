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
    #line 4 \"zatu/benri.hpp\"\nusing ll = long long;\nusing ld = long double;\nconst\
    \ ll llmx_0 = 1152921504606846976;\nusing namespace std;\ntemplate<typename T>\n\
    ostream &operator<<(ostream &os,const vector<T>&v) {\n    for(int i=0;i<(int)v.size();i++)\
    \ {\n        os<<v[i]<<(i!=(int)v.size()-1?\" \" : \"\");\n    }\n    return os;\n\
    }\ntemplate<typename T>\nistream &operator>>(istream &is,vector<T>&v) {\n    for(T\
    \ &in:v)is>>in;\n    return is;\n}\ntemplate<typename T,typename S>\nostream &operator<<(ostream\
    \ &os,const vector<pair<T,S>>&v) {\n    for(int i=0;i<(int)v.size();i++) {\n \
    \       os<<v[i].first<<\" \"<<v[i].second<<endl;\n    }\n    return os;\n}\n\
    template<typename T,typename S>\nistream &operator>>(istream &is,vector<pair<T,S>>&v)\
    \ {\n    for(auto &in:v)is>>in.first>>in.second;\n    return is;\n}\n#define overload4(_1,\
    \ _2, _3, _4, name, ...) name\n#define rep1(n) for(ll i = 0; i < (n); ++i)\n#define\
    \ rep2(i, n) for(ll i = 0; i < (n); ++i)\n#define rep3(i, a, b) for(ll i = (a);\
    \ i < (b); ++i)\n#define rep4(i, a, b, c) for(ll i = (a); i < (b); i += (c))\n\
    #define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)\n\
    #define overload4(_1, _2, _3, _4, name, ...) name\n#define rep1(n) for(ll i =\
    \ 0; i < (n); ++i)\n#define rep2(i, n) for(ll i = 0; i < (n); ++i)\n#define rep3(i,\
    \ a, b) for(ll i = (a); i < (b); ++i)\n#define rep4(i, a, b, c) for(ll i = (a);\
    \ i < (b); i += (c))\n#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2,\
    \ rep1)(__VA_ARGS__)\n#define per1(n) for(ll i=(n);i>=0;--i)\n#define per2(i,n)\
    \ for(ll i=(n);i>=0;--i)\n#define per3(i,a,b) for(ll i=(a);i>=(b);--i)\n#define\
    \ per4(i,a,b,c) for(ll i=(a);i>=(b);i-=(c))\n#define per(...) overload4(__VA_ARGS__,\
    \ per4, per3, per2, per1)(__VA_ARGS__)\n#line 3 \"graph/template/no_weight_tree.hpp\"\
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
  timestamp: '2023-05-22 18:45:26+09:00'
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
