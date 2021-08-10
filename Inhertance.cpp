#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
  		//Write your code here.
          void description(){
              cout<<"In an isosceles triangle two sides are equal\n";
          }
};

int main(){
    Isosceles isc; //For child using inheritance the object is created
    isc.isosceles();//in that child class function is called
  	isc.description();// In same class another function is called
    isc.triangle();//using child class object , we are trying to access parent function
    return 0;
}        
