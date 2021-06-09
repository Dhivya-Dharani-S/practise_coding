#include<iostream>
#include<math.h>
using namespace std;
int main(){
  
    float a,b,c,d;
    cin>>a>>b;
    /* d=a%b; not possible for float divisions ; getting error like :invalid operands of types ‘float’ and ‘float’ to binary ‘operator%’*/
  /* for that we are using fmod */
    c=fmod(a,b);
    cout<<c<<endl;
    return 0;
}
