vector<int> squareSorted(vector<int>& arr) {
   vector<int> ans(arr.size());
   int i = 0;
   int j = arr.size()-1;
   int idx = arr.size()-1;
   while(i <= j) {
       int r1 = arr[i] * arr[i];
       int r2 = arr[j] * arr[j];
       if(r1 > r2) {
           ans[idx--] = r1;
           i++;
       }
       else {
           ans[idx--] = r2;
           j--;
       }
   }
   return ans;
}