int Solution::maxSubArray(const vector<int> &A) {
   int max_cur = 0;
   int max_global = INT_MIN;
   for(int i :A)
   {
       max_cur = max(i,max_cur+i);
       if(max_cur > max_global)
       max_global = max_cur ;
   }
    return max_global;
}
