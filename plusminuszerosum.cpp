void plusMinus(vector<int> arr) {
int n=arr.size(); int pos=0, neg=0,zero=0;
for(int i=0;i<n;i++){
    if(arr[i]<0){
        neg+=1;
    }
    if(arr[i]==0){
        zero+=1;
    }
    if(arr[i]>0){
        pos+=1;
    }
}
cout<<setprecision(6)<<((float)pos/n)<<endl<<setprecision(6)<<((float)neg/n)<<endl<<setprecision(6)<<((float)zero/n)<<endl;
}
/* STDIN           Function
-----           --------
6               arr[] size n = 6
-4 3 -9 0 4 1   arr = [-4, 3, -9, 0, 4, 1]

Explanation

There are 3 positive numbers, 2  negative numbers, and  1 zero in the array.
The proportions of occurrence are positive:3/5=0.500000 , negative:2/5= 0.333333  and zeros:1/5 = 0.166667.

Output should be:- 
0.500000
0.333333
0.166667
*/
