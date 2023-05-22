#pragma once
#include<bits/stdc++.h>
#include "template/template_func.hpp"
using ll = long long;
using ld = long double;
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
template<typename T,typename S>
ostream &operator<<(ostream &os,const vector<pair<T,S>>&v) {
    for(int i=0;i<(int)v.size();i++) {
        os<<v[i].first<<" "<<v[i].second<<endl;
    }
    return os;
}
template<typename T,typename S>
istream &operator>>(istream &is,vector<pair<T,S>>&v) {
    for(auto &in:v)is>>in.first>>in.second;
    return is;
}
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(n) for(ll i = 0; i < (n); ++i)
#define rep2(i, n) for(ll i = 0; i < (n); ++i)
#define rep3(i, a, b) for(ll i = (a); i < (b); ++i)
#define rep4(i, a, b, c) for(ll i = (a); i < (b); i += (c))
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define overload4(_1, _2, _3, _4, name, ...) name
#define rep1(n) for(ll i = 0; i < (n); ++i)
#define rep2(i, n) for(ll i = 0; i < (n); ++i)
#define rep3(i, a, b) for(ll i = (a); i < (b); ++i)
#define rep4(i, a, b, c) for(ll i = (a); i < (b); i += (c))
#define rep(...) overload4(__VA_ARGS__, rep4, rep3, rep2, rep1)(__VA_ARGS__)
#define per1(n) for(ll i=(n);i>=0;--i)
#define per2(i,n) for(ll i=(n);i>=0;--i)
#define per3(i,a,b) for(ll i=(a);i>=(b);--i)
#define per4(i,a,b,c) for(ll i=(a);i>=(b);i-=(c))
#define per(...) overload4(__VA_ARGS__, per4, per3, per2, per1)(__VA_ARGS__)