vector<int> rotLeft(vector<int> a, int d) {
int n=a.size();
d=d%n;
vector<int>result(n);
for(int i=0;i<n;i++){
    result[(n+i-d)%n]=a[i];
}
return result;
}
