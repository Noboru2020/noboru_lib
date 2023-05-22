---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/shortest-path/dijkstra.hpp
    title: graph/shortest-path/dijkstra.hpp
  - icon: ':heavy_check_mark:'
    path: graph/template/weighted_graph.hpp
    title: graph/template/weighted_graph.hpp
  - icon: ':heavy_check_mark:'
    path: zatu/benri.hpp
    title: zatu/benri.hpp
  - icon: ':heavy_check_mark:'
    path: zatu/template/template_func.hpp
    title: zatu/template/template_func.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/shortest_path
    links:
    - https://judge.yosupo.jp/problem/shortest_path
  bundledCode: "#line 1 \"verify-code/yosupojudge/graph/dijkstra.test.cpp\"\n#define\
    \ PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#line 2 \"zatu/benri.hpp\"\
    \n#include<bits/stdc++.h>\n#line 3 \"zatu/template/template_func.hpp\"\ntemplate<typename\
    \ T,typename U>\ninline bool chmin(T &a,const U &b){return (a>b?a=b,true:false);}\n\
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
    \ per4, per3, per2, per1)(__VA_ARGS__)\n#line 3 \"graph/template/weighted_graph.hpp\"\
    \ntemplate<class T = int>struct weight_edge{\n    int from;\n    int to;\n   \
    \ T cost;\n    int idx;\n    weight_edge(int t,const T &c)\n    :to(t),cost(c){}\n\
    \    weight_edge(int f,int t,const T &c,int i=-1)\n    :from(f),to(t),cost(c),idx(i){}\n\
    \    operator int() const{return to;}\n};\ntemplate<class T=int>using graph_w=std::vector<std::vector<weight_edge<T>>>;\n\
    #line 4 \"graph/shortest-path/dijkstra.hpp\"\ntemplate<class T>std::vector<T>dijkstra(const\
    \ graph_w<T>&G,int s=0){\n    int N=G.size();\n    assert(0<=s&&s<N);\n    std::vector<T>dis(N,llmx_0);\n\
    \    dis[s]=0;\n    std::priority_queue<std::pair<T,int>,std::vector<std::pair<T,int>>,std::greater<std::pair<T,int>>>pq;\n\
    \    pq.emplace(0,s);\n    while(!pq.empty()){\n        auto [w,v]=pq.top();\n\
    \        pq.pop();\n        if(dis[v]!=w)continue;\n        for(weight_edge we:G[v]){\n\
    \            if(chmin(dis[we.to],w+we.cost))pq.emplace(dis[we.to],we.to);\n  \
    \      }\n    }\n    return dis;\n}\n#line 4 \"verify-code/yosupojudge/graph/dijkstra.test.cpp\"\
    \nusing namespace std;\nint main(){\n    int N,M,s,t;cin>>N>>M>>s>>t;\n    graph_w<ll>WG(N),RG(N);\n\
    \    for(int i=0;i<M;i++){\n        int a,b;ll c;cin>>a>>b>>c;\n        weight_edge<ll>e(b,c);\n\
    \        WG[a].push_back(e);\n        e.to=a;\n        RG[b].push_back(e);\n \
    \   }\n    vector<ll>D=dijkstra(WG,s);\n    if(D[t]==llmx_0){\n        puts(\"\
    -1\");return 0;\n    }\n    vector<pair<int,int>>ans;\n    vector<bool>seen(N,false);\n\
    \    int nowv=t;\n    seen[nowv]=true;\n    while(nowv!=s){\n        for(auto\
    \ e:RG[nowv]){\n            if(!seen[e.to]&&D[e.to]+e.cost==D[nowv]){\n      \
    \          ans.push_back({e.to,nowv});\n                seen[e.to]=true;\n   \
    \             nowv=e.to;\n                break;\n            }\n        }\n \
    \   }\n    reverse(ans.begin(),ans.end());\n    cout<<D[t]<<\" \"<<ans.size()<<endl;\n\
    \    for(auto [a,b]:ans)cout<<a<<\" \"<<b<<endl;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#include\
    \ \"../../../graph/shortest-path/dijkstra.hpp\"\n#include \"../../../zatu/benri.hpp\"\
    \nusing namespace std;\nint main(){\n    int N,M,s,t;cin>>N>>M>>s>>t;\n    graph_w<ll>WG(N),RG(N);\n\
    \    for(int i=0;i<M;i++){\n        int a,b;ll c;cin>>a>>b>>c;\n        weight_edge<ll>e(b,c);\n\
    \        WG[a].push_back(e);\n        e.to=a;\n        RG[b].push_back(e);\n \
    \   }\n    vector<ll>D=dijkstra(WG,s);\n    if(D[t]==llmx_0){\n        puts(\"\
    -1\");return 0;\n    }\n    vector<pair<int,int>>ans;\n    vector<bool>seen(N,false);\n\
    \    int nowv=t;\n    seen[nowv]=true;\n    while(nowv!=s){\n        for(auto\
    \ e:RG[nowv]){\n            if(!seen[e.to]&&D[e.to]+e.cost==D[nowv]){\n      \
    \          ans.push_back({e.to,nowv});\n                seen[e.to]=true;\n   \
    \             nowv=e.to;\n                break;\n            }\n        }\n \
    \   }\n    reverse(ans.begin(),ans.end());\n    cout<<D[t]<<\" \"<<ans.size()<<endl;\n\
    \    for(auto [a,b]:ans)cout<<a<<\" \"<<b<<endl;\n}"
  dependsOn:
  - graph/shortest-path/dijkstra.hpp
  - graph/template/weighted_graph.hpp
  - zatu/benri.hpp
  - zatu/template/template_func.hpp
  isVerificationFile: true
  path: verify-code/yosupojudge/graph/dijkstra.test.cpp
  requiredBy: []
  timestamp: '2023-05-22 18:45:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: verify-code/yosupojudge/graph/dijkstra.test.cpp
layout: document
redirect_from:
- /verify/verify-code/yosupojudge/graph/dijkstra.test.cpp
- /verify/verify-code/yosupojudge/graph/dijkstra.test.cpp.html
title: verify-code/yosupojudge/graph/dijkstra.test.cpp
---