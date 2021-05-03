#include<iostream>
#include<cstdio>
using namespace std;
int i;
int LinearSearch(int arr[],int n,int key){
    for(i=0;i<n;i++){
        if(key==arr[i]){
            cout<<"The element you have searched is present and the index of that element is:- "<<endl;
            return i;
        }
    }
    return -1;
}
int main()
{ 
 int *arr=(int *)malloc(sizeof(int));
 int n=0,key;
 char ch;
 if(arr==NULL){
     cout<<"memory not allocated";
    return 0;
 }   
	do{
	scanf("%d%c", &arr[n], &ch); 
     n++;
     arr=(int *)realloc(arr,n+1);
 }while(ch!= '\n');
 cout<<"The array elements are:- ";
 for(int i=0;i<n;i++){
cout<<arr[i]<<" ";
 }
 cout<<"Enter the key:- "<<endl;
 cin>>key;
 cout<<LinearSearch(arr,n,key)<<endl;
    return 0;
}
