---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/shortest-path/dijkstra.hpp
    title: graph/shortest-path/dijkstra.hpp
  - icon: ':x:'
    path: graph/template/weightedgraph.hpp
    title: graph/template/weightedgraph.hpp
  - icon: ':x:'
    path: zatu/benri.hpp
    title: zatu/benri.hpp
  - icon: ':x:'
    path: zatu/template/template_func.hpp
    title: zatu/template/template_func.hpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
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
    #line 4 \"zatu/benri.hpp\"\nusing ll = long long;\n#line 3 \"graph/template/weightedgraph.hpp\"\
    \ntemplate<class T = int>struct weight_edge{\n    int from;\n    int to;\n   \
    \ T cost;\n    int idx;\n    weight_edge(int t,const T &c)\n    :to(t),cost(c){}\n\
    \    weight_edge(int f,int t,const T &c,int i=-1)\n    :from(f),to(t),cost(c),idx(i){}\n\
    \    operator int() const{return to;}\n};\ntemplate<class T=int>using graph_w=std::vector<std::vector<weight_edge<T>>>;\n\
    #line 4 \"graph/shortest-path/dijkstra.hpp\"\ntemplate<class T>std::vector<T>dijkstra(const\
    \ graph_w<T>&G,int s=0){\n    int N=G.size();\n    assert(0<=s&&s<N);\n    std::vector<T>dis(N,INFINITY/10);\n\
    \    dis[s]=0;\n    std::priority_queue<std::pair<T,int>,std::vector<std::pair<T,int>>,std::greater<std::pair<T,int>>>pq;\n\
    \    pq.emplace(0,s);\n    while(!pq.empty()){\n        auto [w,v]=pq.top();\n\
    \        pq.pop();\n        if(dis[v]!=w)continue;\n        for(weight_edge we:G[v]){\n\
    \            if(chmin(dis[we.to],w+we.cost))pq.emplace(dis[we.to],we.to);\n  \
    \      }\n    }\n    return dis;\n}\n#line 4 \"verify-code/yosupojudge/graph/dijkstra.test.cpp\"\
    \nusing namespace std;\nint main(){\n    int N,M,s,t;cin>>N>>M>>s>>t;\n    graph_w<ll>WG(N),RG(N);\n\
    \    for(int i=0;i<M;i++){\n        int a,b;ll c;cin>>a>>b>>c;\n        weight_edge<ll>e(b,c);\n\
    \        WG[a].push_back(e);\n        e.to=a;\n        RG[b].push_back(e);\n \
    \   }\n    vector<ll>D=dijkstra(WG,s);\n    cout<<D[t]<<endl;\n    if(D[t]==9223372036854775807){\n\
    \        puts(\"-1\");return 0;\n    }\n    vector<pair<int,int>>ans;\n    vector<bool>seen(N,false);\n\
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
    \   }\n    vector<ll>D=dijkstra(WG,s);\n    cout<<D[t]<<endl;\n    if(D[t]==9223372036854775807){\n\
    \        puts(\"-1\");return 0;\n    }\n    vector<pair<int,int>>ans;\n    vector<bool>seen(N,false);\n\
    \    int nowv=t;\n    seen[nowv]=true;\n    while(nowv!=s){\n        for(auto\
    \ e:RG[nowv]){\n            if(!seen[e.to]&&D[e.to]+e.cost==D[nowv]){\n      \
    \          ans.push_back({e.to,nowv});\n                seen[e.to]=true;\n   \
    \             nowv=e.to;\n                break;\n            }\n        }\n \
    \   }\n    reverse(ans.begin(),ans.end());\n    cout<<D[t]<<\" \"<<ans.size()<<endl;\n\
    \    for(auto [a,b]:ans)cout<<a<<\" \"<<b<<endl;\n}"
  dependsOn:
  - graph/shortest-path/dijkstra.hpp
  - graph/template/weightedgraph.hpp
  - zatu/benri.hpp
  - zatu/template/template_func.hpp
  isVerificationFile: true
  path: verify-code/yosupojudge/graph/dijkstra.test.cpp
  requiredBy: []
  timestamp: '2023-04-08 00:06:57+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify-code/yosupojudge/graph/dijkstra.test.cpp
layout: document
redirect_from:
- /verify/verify-code/yosupojudge/graph/dijkstra.test.cpp
- /verify/verify-code/yosupojudge/graph/dijkstra.test.cpp.html
title: verify-code/yosupojudge/graph/dijkstra.test.cpp
---
