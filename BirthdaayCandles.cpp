#include<iostream>
using namespace std;
int main()
{
int i,n;
int max = 0;
cin>>n;
int a[n];
int count = 0;
for (i = 1; i <= n; i++) {
cin>>a[i];
if (max < a[i])
max = a[i];
}
for (i = 1; i <= n; i++)
if (a[i] == max)
count++;
cout<<count;
return 0;
}
/*Sample Input 
4
3 2 1 3
Sample Output 
2
Explanation 

Candle heights are[3,2,1,3] . The tallest candles are 3 units, and there are 2 of them. */
