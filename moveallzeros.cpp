#include<iostream>
using namespace std;
void movezeros(int * arr, int n){
    int count=0;
    for(int i=0;i<=n;i++){
    if (arr[i]!=0){
        arr[count++]=arr[i];
    }
    }
    while(count<=n){
        arr[count++]=0;
    }

}

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
movezeros(arr,n);
cout<<"The array values after shifting:-"<<endl;
for(int j=0;j<=n;j++){
    cout<<arr[j]<<" ";
}
if(arr){
    free(arr);
    arr=NULL;
}

    return 0;
}
