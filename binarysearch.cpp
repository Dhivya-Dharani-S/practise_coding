#include<iostream>
#include<cstdio>
using namespace std;
int i;
int BinarySearch(int arr[],int n,int key){
    int s=0,e=n;
    while(s<e){
        int mid=(s+e)/2;
        if(arr[mid]==key){
            cout<<"The element you have searched is present and the index of the element is:- ";
            return mid;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        else{
            s=mid+1;
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
 cout<<BinarySearch(arr,n,key)<<endl;
 return 0;
}
