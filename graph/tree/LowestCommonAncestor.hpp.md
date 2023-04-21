---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/template/no_weight_tree.hpp
    title: graph/template/no_weight_tree.hpp
  - icon: ':heavy_check_mark:'
    path: zatu/benri.hpp
    title: zatu/benri.hpp
  - icon: ':heavy_check_mark:'
    path: zatu/template/template_func.hpp
    title: zatu/template/template_func.hpp
  _extendedRequiredBy: []
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
    \ &is,vector<T>&v) {\n    for(T &in:v)is>>in;\n    return is;\n}\ntemplate<typename\
    \ T,typename S>\nostream &operator<<(ostream &os,const vector<pair<T,S>>&v) {\n\
    \    for(int i=0;i<(int)v.size();i++) {\n        os<<v[i].first<<\" \"<<v[i].second<<endl;\n\
    \    }\n    return os;\n}\ntemplate<typename T,typename S>\nistream &operator>>(istream\
    \ &is,vector<pair<T,S>>&v) {\n    for(auto &in:v)is>>in.first>>in.second;\n  \
    \  return is;\n}\n#line 3 \"graph/template/no_weight_tree.hpp\"\ntemplate<class\
    \ T = int>struct no_weight_tree{\n    std::vector<std::vector<T>>no_weight_tree_graph;\n\
    \    no_weight_tree(int N):no_weight_tree_graph(N){};\n    void build__noweight_tree_input_edge(bool\
    \ one_indexed,bool twoway){\n        int M=no_weight_tree_graph.size();\n    \
    \    for(int i=0;i<M-1;i++){\n            int a,b;cin>>a>>b;\n            if(one_indexed){\n\
    \                a--;b--;\n            }\n            no_weight_tree_graph[a].push_back(b);\n\
    \            if(twoway)no_weight_tree_graph[b].push_back(a);\n        }\n    }\n\
    };\n#line 4 \"graph/tree/LowestCommonAncestor.hpp\"\nstruct LCA{\n    std::vector<std::vector<int>>parent;\n\
    \    std::vector<int>dis;\n    LCA(const no_weight_tree<int> &G,int root=0){\n\
    \        int N=G.no_weight_tree_graph.size(),K=1;\n        while((1<<K)<N)K++;\n\
    \        parent.assign(K+1,vector<int>(N,-1));\n        dis.assign(N,-1);\n  \
    \      dfs(G,root,-1,0);\n        for(int k=0;k<K-1;k++){\n            for(int\
    \ i=0;i<N;i++){\n                if(parent[k][i]==-1)parent[k+1][i]=-1;\n    \
    \            else parent[k+1][i]=parent[k][parent[k][i]];\n            }\n   \
    \     }\n    }\n    void dfs(const no_weight_tree<int> &G,int v,int pv,int d){\n\
    \        parent[0][v]=pv;\n        dis[v]=d;\n        for(int nv:G.no_weight_tree_graph[v]){\n\
    \            if(nv!=pv)dfs(G,nv,v,d+1);\n        }\n    }\n    int get_lca(int\
    \ a,int b){\n        if(dis[a]<dis[b])swap(a,b);\n        int K=parent.size();\n\
    \        for(int k=0;k<K;k++){\n            if(((dis[a]-dis[b])>>k)&1)a=parent[k][a];\n\
    \        }\n        if(a==b)return a;\n        for(int k=K-1;k>=0;k--){\n    \
    \        if(parent[k][a]!=parent[k][b])a=parent[k][a],b=parent[k][b];\n      \
    \  }\n        return parent[0][a];\n    }\n    int get_dist(int a,int b){\n  \
    \      return dis[a]+dis[b]-2*dis[get_lca(a,b)];\n    }\n};\n"
  code: "#pragma once\n#include \"../template/no_weight_tree.hpp\"\n#include \"../../zatu/benri.hpp\"\
    \nstruct LCA{\n    std::vector<std::vector<int>>parent;\n    std::vector<int>dis;\n\
    \    LCA(const no_weight_tree<int> &G,int root=0){\n        int N=G.no_weight_tree_graph.size(),K=1;\n\
    \        while((1<<K)<N)K++;\n        parent.assign(K+1,vector<int>(N,-1));\n\
    \        dis.assign(N,-1);\n        dfs(G,root,-1,0);\n        for(int k=0;k<K-1;k++){\n\
    \            for(int i=0;i<N;i++){\n                if(parent[k][i]==-1)parent[k+1][i]=-1;\n\
    \                else parent[k+1][i]=parent[k][parent[k][i]];\n            }\n\
    \        }\n    }\n    void dfs(const no_weight_tree<int> &G,int v,int pv,int\
    \ d){\n        parent[0][v]=pv;\n        dis[v]=d;\n        for(int nv:G.no_weight_tree_graph[v]){\n\
    \            if(nv!=pv)dfs(G,nv,v,d+1);\n        }\n    }\n    int get_lca(int\
    \ a,int b){\n        if(dis[a]<dis[b])swap(a,b);\n        int K=parent.size();\n\
    \        for(int k=0;k<K;k++){\n            if(((dis[a]-dis[b])>>k)&1)a=parent[k][a];\n\
    \        }\n        if(a==b)return a;\n        for(int k=K-1;k>=0;k--){\n    \
    \        if(parent[k][a]!=parent[k][b])a=parent[k][a],b=parent[k][b];\n      \
    \  }\n        return parent[0][a];\n    }\n    int get_dist(int a,int b){\n  \
    \      return dis[a]+dis[b]-2*dis[get_lca(a,b)];\n    }\n};"
  dependsOn:
  - graph/template/no_weight_tree.hpp
  - zatu/benri.hpp
  - zatu/template/template_func.hpp
  isVerificationFile: false
  path: graph/tree/LowestCommonAncestor.hpp
  requiredBy: []
  timestamp: '2023-04-21 21:09:20+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - verify-code/yosupojudge/graph/LowestCommonAncestor.test.cpp
documentation_of: graph/tree/LowestCommonAncestor.hpp
layout: document
redirect_from:
- /library/graph/tree/LowestCommonAncestor.hpp
- /library/graph/tree/LowestCommonAncestor.hpp.html
title: graph/tree/LowestCommonAncestor.hpp
---
