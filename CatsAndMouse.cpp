#include<bits/stdc++.h>
using namespace std;
int main(){

    int q;

    cin >> q;
    for(int i = 0; i < q; i++){
        int a,b,c;
        cin >> a >> b >> c;
        abs(a-c) < abs(b-c) ? cout << "Cat A" : abs(b-c) < abs(a-c) ? cout << "Cat B" : cout << "Mouse C";
        cout << endl;
    }
    return 0;
}

/*
Sample Input 
2
1 2 3
1 3 2
Sample Output 
Cat B
Mouse C

Explanation:
Here we want to find which cat will catch the mouse first and we want to output it. If No two cats reach the mouse 
at the same time then we want to output the mouse name
So, here we find the absolute difference between them , then we will able to guess the shortest distance from the cat to the mouse
*/                            
