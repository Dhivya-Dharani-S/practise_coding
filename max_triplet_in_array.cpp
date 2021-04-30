#include<iostream>
#include<climits>
#include<cstdlib>
using namespace std;
int max_triplet(int * arr, int n){
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;
    for(int i=0;i<=n;i++){
        if(max1<arr[i]){
            max3=max2;
            max2=max1;
            max1=arr[i];
        }
        else if(max2<arr[i]){
            max3=max2;
            max2=arr[i];
        }
        else if(max3<arr[i]){
            max3=arr[i];
        }
    }
    return max1+max2+max3;
}




int main(){
    int *arr=(int *) malloc (sizeof(int));
    int n=0,ans;
    char ch;
    if(arr==NULL){
        cout<<"Memory not allocated";
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
ans = max_triplet(arr,n);
cout<<endl;
cout<<"Maximum Triplet of the given array is:- "<< ans <<endl;
if(arr){
    free(arr);
    arr=NULL;
}return 0;
}
