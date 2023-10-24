#include<bits/stdc++.h>

using namespace std;


int dfs(map<string, string> &mp, string node, map<string, string> &vis){
    vis[]



}





int main(){
    vector<pair<string, string>> v;
    int n = v.size();
    vector<vector<string>> adj(n);
    map<string, string> mp;
    for(int i = 0;i<n;i++){
        mp[v[i].first] = v[i].second;
    }
    for(auto i:mp){
        string startNode = i.first;
        map<string, string> vis;
        dfs(mp, startNode, vis);
    }
    return 0;
}