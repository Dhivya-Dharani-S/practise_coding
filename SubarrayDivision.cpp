int birthday(vector<int> s, int d, int m) {
int sum=0;
    int comb=0;
    for(int i=0;i<m;i++){
        sum=sum+s[i];
    }
    if(sum==d){
        comb++;
    }
    for(int i=1;i<=s.size()-m;i++){
        sum=sum-s[i-1]+s[i+m-1];
        if(sum==d){
            comb++;
        }
    }
    return comb;
}
/*
Sample Input 
5
1 2 1 3 2
3 2
Sample Output 
2
The trickiest problem which took hours to understand, Here actually we want to identify the contiguous m (m input given by thee user) combinations 
with the sum of d(input given by the user). Here the logic is :

--> for the first m elements we want to find the sum and comapare it with the variable d
--> Then , we include that sum(which includes the m combination sum) and subtracting the previous one and adding the next one.
EXAMPLE:
1 2 1 3 2 is the input
here d=3 is the sum we want to calculate    and      m=2 we want to select 2 elements
At first step we would add 1,2 (index 0,1 ) as m=2, then add it together it becomes 3 and this sum is compared with d(the sum in which we want to compare)
Next,  
we want to include (index 1,2) so here we add the previous sum we have calculated , add the index 2 to it , remove the unwanted index (0) --> logic mentioned
in the 11th line...
So, like this we want to evaluate all the possible combination and compare it with d and increment the count since they asked how many combinations are possible
*/
