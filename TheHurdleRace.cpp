int hurdleRace(int k, vector<int> height) {
int maximum=*max_element(height.begin(),height.end());
int doses=maximum-k;
if(k>maximum){
    return 0;
}
else{
return doses;}
}
/*
Sample Input 
5->number of elements 4->The maximum height of the hurdle the man can jump
1 6 3 5 2 --> heights given
Sample Output
2
EXPLANATION:
Here First we found out the max element in the given vector...Then we subtract the max height with the given max height  where the man 
can able to jump...if the maximum hurdle the man can jump exceeds the max height then we print out the subtracted height, otherwise print 0
*/  
