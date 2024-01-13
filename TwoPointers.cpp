// sum of pairs in a vector equal to the target

#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={3,4,1,7,-4,2,2,0,0,4};
    int k=4;
    int res=0;
    unordered_map<int,int> d;
    for(auto i:v){
        d[v[i]]++;
    }
    for(int i=0;i<v.size();i++){
        if(d[k-v[i]]!=-1){
            res+=d[k-v[i]];
            d[i]-=1;
        }
    }
    cout<<res;
}