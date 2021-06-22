#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main() {
    int n; 
    cin>>n;
    int p[n],q[n];
    for(int i=0;i<n;i++){
      cin>>p[i]>>q[i]; 
    } 
    set<int>s;
    for(int i=0;i<n;i++){
        if(p[i]==1){
            s.insert(q[i]);
        }
        if(p[i]==2){
            s.erase(q[i]);
        }
        if(p[i]==3){
            set<int>::iterator f=s.find(q[i]);
            if(f==s.end()){
                cout<<"No"<<endl;
            } 
            else{
                cout<<"Yes"<<endl;
            }
        }
    }
    return 0;
}
