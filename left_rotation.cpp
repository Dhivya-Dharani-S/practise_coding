vector<int> rotateLeft(int d, vector<int> a) {
    vector<int>result;
    for(auto i=a.begin()+d;i!=a.end();i++)
      result.push_back(*i);
    for(auto i=a.begin();i!=a.begin()+d;i++)
      result.push_back(*i);
    return result;   
}
