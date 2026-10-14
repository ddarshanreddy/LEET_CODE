class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        int cnt=0;
        int n=nums.size();
        map<int,vector<int>> mp;
            for(int i=0 ;i<n; i++){
                mp[nums[i]].push_back(i);
            }
            for(auto x : mp){
                if(x.second.size() == 3 && x.second[1]-x.second[0] == x.second[2] - x.second[1]){
                    cnt++;
                }
            }
        return cnt;
    }
};