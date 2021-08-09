int findDigits(int n) {
int temp=n,count=0;
while(temp!=0)
{
    int rem=temp%10;
    if(rem!=0 && n%rem == 0){
    count++;}
    temp=temp/10;
} 
    return count;
}
/*
Sample Input
2
12
1012
Sample Output
2
3
EXPLANATION: Here we splitted the number and we check whether that splitted number is divisible by the whole number (n) 
and if it is, then we increase the count...
*/
