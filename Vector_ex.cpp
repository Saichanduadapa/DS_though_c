#include<iostream>
#include<vector> 
using namespace std;
int main(){
    vector<int>v1(100,1);
    v1[0]=90;
    
    //v1.begin() prints the 1st element in the vector
    cout<<*v1.begin() <<" is the first element in the vector \n ";
    
    //v1.end() prints the last element in the vector
    cout<<*v1.end()<<" is the last element in the vector \n ";
    
    for(auto i=v1.begin();i!=v1.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    
    v1.insert(v1.begin()+20,1200);
    cout<<v1[20]<<" is the 20th element in the vector after insert operation\n";
    
    v1.erase(v1.begin()+20);
    cout<<v1[20]<< " is the 20th element in the vector after erace operation \n";
    
}