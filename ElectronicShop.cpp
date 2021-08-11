int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max1=-1;
    for(int i=0;i<keyboards.size();i++){
        for(int j=0;j<drives.size();j++){
            if(keyboards[i]+drives[j]<=b)
            { 
                max1=max(max1,keyboards[i]+drives[j]); 
            }
        }
    }
return max1;
}
/*
Sample Input 
10 2 3
3 1
5 2 8
Sample Output 
9
Both the keyboard and usb is combinated,and that sum is checked with the given sum (rupees) and the maximum o those combination is checked 
and the result is assigned to the  max value...That's It!!!
*/
