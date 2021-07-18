int divisibleSumPairs(int n, int k, vector<int> ar) {
int count=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        
        if(i<j){
        if(((ar[i]+ar[j])%k)==0){
          count++;  
        }}
    }
}
return count;
}

/*
Sample Input
INPUT           Function
-----           --------
6 3             n = 6, k = 3
1 3 2 6 1 2     ar = [1, 3, 2, 6, 1, 2]
Sample Output
 5
EXPLANATION:-
Here 5 valid pairs when k=3:
ar[0]+ar[2]=1+2=3   ---> divisible by 3
ar[0]+ar[5]=1+2=3   ---> divisible by 3
ar[1]+ar[3]=3+6=9   ---> divisible by 3
ar[2]+ar[4]=2+1=3   ---> divisible by 3
ar[4]+ar[5]=1+2=3   ---> divisible by 3
THEREFORE 5 unique pairs are possible using the given array
*/
