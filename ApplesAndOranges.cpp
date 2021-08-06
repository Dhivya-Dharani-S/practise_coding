void countApplesAndOranges(int s, int t, int a, int b,int m,int n, vector<int> apples, vector<int> oranges) {
    int count1=0,count2=0;
for(int i=0;i<m;i++){
    apples[i]=a+apples[i];
    if(apples[i]>=s &&  apples[i]<=t){
        count1+=1;}
}
for(int i=0;i<n;i++){
    oranges[i]=b+oranges[i];
    if(oranges[i]>=s &&  oranges[i]<=t){
        count2+=1;
    }
}
cout<<count1<<'\n'<<count2;
}
/* 
Input 
7 11 ---> s and t --->the range in which we want to find no.of.apples and no.of.oranges
5 15 ---> a and b--->tree's location apple->5 orange ->15
3 2 -->m and n ----> no.of.apples and no.of.oranges 
-2 2 1 --->distance of those each apples
5 -6----> distance of those each oranges
Output  
1 --->no.of.apples within the range s and t
1 --->no.of.oranges within the range s and t
                                  
*/
