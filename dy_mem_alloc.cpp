#include<iostream>
using namespace std;
int main(){
    int *arr=(int *) malloc (sizeof(int));
    int n=0;
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
    return 0;
}
