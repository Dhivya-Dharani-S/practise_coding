#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    int count[6]={0};
    for(int i=0;i<n;i++)
        {
        cin>>arr[i];
        count[arr[i]]++; //counting frequency of ID numbers    
    }
    int max=count[1];
    int max_index=1;
    for(int i=2;i<=5;i++)
        {
        if(count[i]>max)
            {
            max_index=i;
            max=count[i];
        }

    }
    cout<<max_index;
    return 0;
}
/*
Sample Input 
6
1 4 4 4 5 3
Sample Output 
4
EXplanation :   we first find out the number of times the element occured in an array .....
then we use another for loop to find the max number of frequency among it and return that index as a max index here in this example 4 is repeated 3 times
(max times) and it's index is also 4 ....So , the output will be 4
*/
