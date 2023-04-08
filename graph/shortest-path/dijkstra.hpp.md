---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: hpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n          \
    \         ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 187, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: /mnt/c/Users/haru2/OJtool/noboru_lib/zatu/template/template_func.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n#include \"../template/weightedgraph.hpp\"\n#include \"../../zatu/benri.hpp\"\
    \ntemplate<class T>std::vector<T>dijkstra(const graph_w<T>&G,int s=0){\n    int\
    \ N=G.size();\n    assert(0<=s&&s<N);\n    std::vector<T>dis(N,llmx_0);\n    dis[s]=0;\n\
    \    std::priority_queue<std::pair<T,int>,std::vector<std::pair<T,int>>,std::greater<std::pair<T,int>>>pq;\n\
    \    pq.emplace(0,s);\n    while(!pq.empty()){\n        auto [w,v]=pq.top();\n\
    \        pq.pop();\n        if(dis[v]!=w)continue;\n        for(weight_edge we:G[v]){\n\
    \            if(chmin(dis[we.to],w+we.cost))pq.emplace(dis[we.to],we.to);\n  \
    \      }\n    }\n    return dis;\n}"
  dependsOn: []
  isVerificationFile: false
  path: graph/shortest-path/dijkstra.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: graph/shortest-path/dijkstra.hpp
layout: document
redirect_from:
- /library/graph/shortest-path/dijkstra.hpp
- /library/graph/shortest-path/dijkstra.hpp.html
title: graph/shortest-path/dijkstra.hpp
---
