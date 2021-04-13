int myCompare(string X, string Y)
{
    string XY = X.append(Y);
    string YX = Y.append(X);
    return XY.compare(YX) > 0 ? 1: 0;
}
string Solution::largestNumber(const vector<int> &A) {
    vector<string> b;
    for(int i=0;i<A.size();i++){
        b.push_back(to_string(A[i]));
    }
    sort(b.begin(),b.end(),myCompare);
    string ans="";
    for(int i=0;i<b.size();i++){
     ans+=b[i];
    }
    int i=0;
    while(ans[i]=='0'){
        i++;
    }
    if(i==ans.length())
     ans="0";
    return ans;
}

// first the given number is converted into string by copying the values of the vector A to another vector of B which is of string data type. (line 8 to line 11)
//Then the string is checked for any 0 existence for that they copying b to ans string and using while loop we check that and if the count of zeros in a string i = length of the string then return 0 as the output(line 13 to 24)
//using sort function we pass the string to compare function and there the possible joins are made and that joins are compared for the maximum value through the function 
// Thus the largest number has been found out. 
