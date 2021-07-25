void bonAppetit(vector<int> bill, int k, int b) {
 int total = 0;int count=bill.size();
    for(int i = 0; i < count; i++){
        total += bill[i];
    }
    total = (total - bill[k])/2;
    if(total == b){
        cout << "Bon Appetit" << endl;
    }else{
        cout << b - total << endl;
    }}
/*

Sample Input 
4 1
3 10 2 9
7

Sample Output
Bon Appetit

EXPLANATION:
here 3+10+2+9 = 24 --> each have to pay -> 24/2-->12
But Anna doesn't eat arr[k] so we subtract it from total amount that is ) (24-10)/2 ---> 7
This 7 == Anna paid to Brian...so we print Bon Apetite in this case 

*/
