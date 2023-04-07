---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: noboru_lib/graph/shortest-path/dijkstra.hpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\n#include\
    \ \"noboru_lib/graph/shortest-path/dijkstra.hpp\"\n#include \"noboru_lib/zatu/benri.hpp\"\
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
  dependsOn: []
  isVerificationFile: true
  path: verify-code/yosupojudge/graph/dijkstra.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: verify-code/yosupojudge/graph/dijkstra.test.cpp
layout: document
redirect_from:
- /verify/verify-code/yosupojudge/graph/dijkstra.test.cpp
- /verify/verify-code/yosupojudge/graph/dijkstra.test.cpp.html
title: verify-code/yosupojudge/graph/dijkstra.test.cpp
---
