//Logic 1
void miniMaxSum(vector<int> arr) {
int count=arr.size();
sort(arr.begin(),arr.end());
long long int sum1=0,sum2=0;
for(int i=0;i<4;i++){
    sum1+=arr[i];
}
for(int i = count-4;i<count;i++ ){
    sum2+=arr[i];
}
cout<<sum1<<" "<<sum2;
}
 
//or

//Logic 2 (Efficient)

void miniMaxSum(vector<int> arr) {
    int n=arr.size();long long int sum=0;
    sort(arr.begin(),arr.end());
    for (int i = 0 ;i<n;i++){
       sum+=arr[i]; 
    }
    cout<<sum-arr[n-1]<<" "<<sum-arr[0];
}

/* 
Sample Input
1 2 3 4 5
Sample Output
10 14
The numbers are 1,2,3,4 and 5. Calculate the following sums using four of the five integers:

Sum everything except 1, the sum is 2+3+4+5= 14.
Sum everything except 2, the sum is 1+3+4+5= 13.
Sum everything except 3, the sum is 1+2+4+5= 12.
Sum everything except 4, the sum is 1+2+3+5= 11.
Sum everything except 5, the sum is 1+2+3+4= 10.
*/
