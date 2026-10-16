class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int n=nums.size();
        vector<int> arr;
       map<int,int> mp;
       for(int i=0;i<n;i++)
       {
        mp[nums[i]]++;
       }
     int x=0;
    
     while(n!=0){
     for(auto x:mp)
     {
        if(x.second!=0){
            arr.push_back(x.first);
            n--;
            mp[x.first]--;
        }
     }}
     return arr;
    }
};