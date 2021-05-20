#include<iostream>
using namespace std;
int gcd(int a,int b){
    int rem;
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int main(){
int a,b;
cout<<"Enter the two numbers: "<<endl;
cin>>a>>b;
cout<<"The GCD of two numbers you have entered is : "<<gcd(a,b)<<endl;
return 0;
}
