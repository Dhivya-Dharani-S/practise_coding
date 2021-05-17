#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the number of characters"<<endl;
    int n;
    cin>>n;
    char arr[n+1];
    cin>>arr;
    bool checking= 1;
    for(int i=0;i<n;i++){
        if(arr[i]!=arr[n-1-i]){
            checking=0;
            break;
        }
    }
    if(checking==true){
        cout<<"The word you entered is a Palindrome"<<endl;
    }    
    else{
        cout<<"The word you entered is not a Palindrome"<<endl;
    }
    return 0;
}
