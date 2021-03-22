long arrayManipulation(int n, vector<vector<int>> queries) {
vector <long> v1(n+1,0);
for(int i=0;i<queries.size();i++){
    v1[queries[i][0]-1]+=queries[i][2];
    v1[queries[i][1]]-=queries[i][2];
}
long max_value= v1[0];
for(int i=1;i<n;i++)
{
    v1[i]+=v1[i-1];
    max_value=max(v1[i],max_value);
}
return  max_value;
}
