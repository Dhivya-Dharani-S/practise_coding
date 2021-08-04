#include <bits/stdc++.h>
#include<iostream>

using namespace std;

int main()
{
vector<int>heights(60);
heights[0]=1;
for(int i=1;i<60;i++)
{
    (i%2==0)?heights[i]=heights[i-1]+1:heights[i]=heights[i-1]*2;
}
int t,n;
cin>>t;
for(int i=0;i<t;i++)
{
    cin>>n;
    int result=heights[n];
    cout<<result<<endl;
}
return 0;
 }
/*
Sample Input
3 ---> no.of.test cases
0 __
1   |----> test cases
4 __|
Sample Output
1 --> for 0 height will be 1
2 --> for 1, height will be 2
7 --> for 4, it calculates for that and displays 7 as the output
Explanation : IN spring the tree height will be increased by 1, IN summer tree height double it's height...initially at 0th stage there was spring 
so the height will be 1, at next stage there will be summer and so on... so according to the given query(n)--->the height is calculated and it is 
displayed as output
*/
