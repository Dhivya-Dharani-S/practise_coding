vector<int> breakingRecords(vector<int> scores) 
{
    int count= scores.size();
    int high,low,max=0,min=0;
    high=scores[0]; low=scores[0];
    vector<int>result;
    for(int i=1;i<count;i++)
    {
        if(high<scores[i])
        {
           high= scores[i];
           max++;
        }
        
        if(low>scores[i])
        {
            low=scores[i];
            min++;
        }
    }
    result.push_back(max);
    result.push_back(min);
return result;
}
/*Sample Input
9
10 5 20 20 4 5 2 25 1
Sample Output 
2 4
*/
/* Explanation:-
Game ---> 0   1   2   3   4   5   6   7   8
scores--> 10  5   20  20  4   5   2   25   1
Highest-> 10  10  20  20  20  20  20  25  25   ---> 20,25 -->2 max numbers
Lwest--> 10  5    5  5   4    4   2   2   1   --->  5,4,2,1--->4 min numbers */
