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
    \                ^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n \
    \ File \"/opt/hostedtoolcache/Python/3.11.2/x64/lib/python3.11/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: /mnt/c/Users/haru2/OJtool/noboru_lib/zatu/template/template_func.hpp:\
    \ line -1: no such header\n"
  code: "#pragma once\n#include<bits/stdc++.h>\n#include \"/mnt/c/Users/haru2/OJtool/noboru_lib/zatu/template/template_func.hpp\"\
    \nusing ll = long long;\nconst ll llmx_0 = 1152921504606846976;\nusing namespace\
    \ std;\ntemplate<typename T>\nostream &operator<<(ostream &os,const vector<T>&v)\
    \ {\n    for(int i=0;i<(int)v.size();i++) {\n        os<<v[i]<<(i!=(int)v.size()-1?\"\
    \ \" : \"\");\n    }\n    return os;\n}\ntemplate<typename T>\nistream &operator>>(istream\
    \ &is,vector<T>&v) {\n    for(T &in:v)is>>in;\n    return is;\n}"
  dependsOn: []
  isVerificationFile: false
  path: zatu/benri.hpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: zatu/benri.hpp
layout: document
redirect_from:
- /library/zatu/benri.hpp
- /library/zatu/benri.hpp.html
title: zatu/benri.hpp
---
