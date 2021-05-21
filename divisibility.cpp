#include<iostream>
using namespace std;
int divisibility(int n,int div1,int div2){
    int c1=n/div1;
    int c2=n/div2;
    int c3=n/(div1*div2);
    return c1+c2-c3;
}

int main(){
    int n, div1, div2;
    cout<<"Enter the value of the variable n,div1,div2:  "<<endl;     
    /*Here N represents the number till it want to identify the divisible numbers, div1 represents divisor1 and div2 represents divisor 2-- */
    cin>>n>>div1>>div2;
    cout<<"The Total Numbers that are divisible by "<<div1 << " and "<<div2<< " within "<<n<<" are :-  "<<divisibility(n,div1,div2)<<endl;
    return 0;
}
