class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        map<int,vector<int>> mp;
           for(int i=0 ;i<n; i++){
                mp[nums[i]].push_back(i);
           }
         //iterating in a map
for (auto x : mp) {
    vector<int> v = x.second; //rather than taking second element everytime we use variable for easyness
    int sz = v.size();

   if (sz < 3) {
    continue;
}
    int gap = v[1] - v[0];
    bool valid = true;
//cheking does all the intervals have equal gaps 
    for (int i = 2; i < sz; i++) {
       if((v[i]-v[i-1])!= gap)
       valid = false;
    }

  if(valid) cnt++;
}
return cnt;
    }
};