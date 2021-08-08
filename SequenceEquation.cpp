#include<iostream>

using namespace std;

int main(){
    int n;
    cin>>n;
    int p[n];
    for(int i=1;i<=n;i++){
        int k;
        cin>>k;
        p[k]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<p[p[i]]<<endl;
    }
    return 0;
}

/*
Sample Input 
3
2 3 1
Sample Output 
2
3
1
Explanation:-
Here the simple logic is that we are entering number ranging from i to n in the index of the given input(ie) assuming the given input as the index,
and using another loop we are printing the value as the value of the array of array 
*/
