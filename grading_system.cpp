#include <bits/stdc++.h>
using namespace std;

void GradingSystems() {
     int n;
     cin>>n;
     int a[n];
     for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i]>=38 and a[i]%5>=3){
            while(a[i]%5!=0){
               a[i]++;
            }
        }
        cout<<a[i]<<endl;
     }
}

int main () {
    GradingSystems();
    return 0;
}

/*Sample Input                   Sample Output 0
4
73                                     75
67                                     67
38                                     40
33                                     33

Explanation:-
Student 1 received a 73, and the next multiple of 5 from 73 is 75. Since 75-73<3, the student's grade is rounded to 75 .
Student 2 received a 67, and the next multiple of 5 from 67 is 70. Since 70-67=3, the grade will not be modified and the student's final grade is 67 .
Student 3 received a 38, and the next multiple of 5 from 38 is 40. Since 40-38<3, the student's grade will be rounded to 40.
Student 4 received a grade below 33 , so the grade will not be modified and the student's final grade is 33.
