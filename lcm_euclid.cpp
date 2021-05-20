#include<iostream>
using namespace std;
int gcd(int a, int b){
    int rem;
    while(b!=0){
        rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
int main(){
    int a,b;
    cout<<"Enter the two numbers:"<<endl;
    cin>>a>>b;
    cout<<"The LCM of two numbers are : "<<lcm(a,b)<<endl;
    return 0;

}
