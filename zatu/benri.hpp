#pragma once
#include<bits/stdc++.h>
#include "/mnt/c/Users/haru2/OJtool/noboru_lib/zatu/template/template_func.hpp"
using ll = long long;
const ll llmx_0 = 1152921504606846976;
using namespace std;
template<typename T>
ostream &operator<<(ostream &os,const vector<T>&v) {
    for(int i=0;i<(int)v.size();i++) {
        os<<v[i]<<(i!=(int)v.size()-1?" " : "");
    }
    return os;
}
template<typename T>
istream &operator>>(istream &is,vector<T>&v) {
    for(T &in:v)is>>in;
    return is;
}