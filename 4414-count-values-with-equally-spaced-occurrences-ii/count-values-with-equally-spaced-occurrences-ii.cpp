class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        map<int,vector<int>> mp;
           for(int i=0 ;i<n; i++){
                mp[nums[i]].push_back(i);
           }
         
for (auto x : mp) {
    vector<int> v = x.second;
    int sz = v.size();

   if (sz < 3) {
    continue;
}
    int gap = v[1] - v[0];
    bool valid = true;

    for (int i = 2; i < sz; i++) {
       if((v[i]-v[i-1])!= gap)
       valid = false;
    }

  if(valid) cnt++;
}
return cnt;
    }
};