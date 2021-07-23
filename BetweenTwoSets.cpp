int getTotalX(vector<int> a, vector<int> b) {
sort(a.begin(),a.end());
sort(b.begin(),b.end());
short number=a.back();
short times_multiplied=2; int count=0;
while(number<=b.front()){
    bool is_multiple=true;
    bool is_factor=true;
    for(int i=0;i<a.size();i++){
        if(number%a[i]!=0){
            is_multiple=false;
            break;
        }
        }
        for(int i=0;i<b.size();i++){
            if(is_multiple && b[i]%number!=0){
                is_factor=false;
                break;
            }
        }
        if(is_multiple && is_factor){
            count++;
        }
number=a.back()*times_multiplied;
times_multiplied++;}
return count;
}
/*
Sample Input
2 3  --> no.of.elements in 2 arrays
2 4  --->elements present in first array
16 32 96 --->elements present in second array
Sample Output
3

EXPLANATION:-
First we have to find multiples between the last element present in the first array and the first element in the second array and the element we found
must be also the factor of that second array too..
*/
