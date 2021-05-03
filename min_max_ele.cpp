#include<iostream>
#include<climits>
using namespace std;
int minmax(int arr[],int n){
    int minnum=INT_MAX;
    int maxnum=INT_MIN;
for(int i=0;i<=n;i++){
    maxnum=max(maxnum,arr[i]);
    minnum=min(minnum,arr[i]);
}
cout<<"Maximimum Number in the array is:- "<<maxnum<<endl;
cout<<"Minimum Number in the array is:- "<<minnum<<endl;
return 0;
}
int main(){
    int *arr=(int *) malloc (sizeof(int));
    int n=0;
    char ch;
    if(arr==NULL){
        cout<<"Memory not allocated";
        return 0;
    }
    cout<<"Enter the array elements:- "<<endl;
while(scanf("%d%c",&arr[n],&ch) && ch!='\n' ){
    n++;
    arr=(int *)realloc(arr,n+1);
}
cout<<"The array elements are: "<<endl;
for(int i=0;i<=n;i++){
    cout<<arr[i]<<" ";
}
minmax(arr,n);
if(arr){
    free(arr);
    arr=NULL;
}
    return 0;
}
