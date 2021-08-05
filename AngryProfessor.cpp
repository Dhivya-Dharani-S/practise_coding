string angryProfessor(int k, vector<int> a) {
int present=0; 
for(int i=0;i<a.size();i++)
{
    if(a[i]<=0){present++;}
}
if(k==present || k<=present){
    return "NO";
}
else{
    return "YES";
}
}
/*
Sample Input
2  --->No.of.queries
4 3 [4--->No.of.Elements, 3--> K value minimum number of students needed to take class](1st query)
-1 -3 4 2 [The entry time of students 0 and -ve vlaue represents student came on time &  +ve value represents student came late]
4 2 (2nd query like above)
0 -1 2 1
Sample Output
YES  
NO
EXPLANATION:-
if the number of students professor said match the students who came on time then it should return YES , Otherwise NO.
So we count the number of students who are come on time to class and based on that we compare that value to the professor given value and 
return the result
*/
