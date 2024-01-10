#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    vector<int> v1={4,5,10,11,-3,13};
    int v=0;
    string s="xxyxxyyxxyyyyy";
    int i=0;
    while(true){
        if(s[i]=='x'){
            cout<<v1[v]<<" is added into the stack\n";
            st.push(v1[v]);
            v++;
        }
        else{
            if(st.empty()){
                cout<<"<<<<---statck is empty don't able to remove an element from the statck---->>>\n";
            }
            else{
            cout<<st.top()<<" is delete from the stack\n";
            st.pop();
            }

        }
        i++;
        if (i==s.size()){
            break;
        }
    }
    cout<<"The remaining elements in the stack is :- \n";
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }

}