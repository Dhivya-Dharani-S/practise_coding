int countingValleys(int steps, string path) {
int up=0;signed int result=0;
for(int i=0;i<steps;i++){
    if(path[i]=='U')
    {
        up++;
    }
    else up--;
    if(up==0 && path[i]=='U'){result++;}
}
return result;
}
/*
Sample Input
8
UDDDUDUU
Sample Output
1

Explanation:
If we represent _ as sea level, a step up as /, and a step down as \, the hike can be drawn as:

_/\      _
   \    /
    \/\/
The hiker enters and leaves one valley.

Actually the logic behind this is up and down gets compensiated and still the string contains 'U' then it will be considered as 
one valley.... In that sense it is calculated
*/
