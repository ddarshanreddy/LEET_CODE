class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
         int m=accounts.size();
   
    int sum=0;
    int max=INT_MIN;
    for(int i=0;i<m;i++)
    {
        int  n= accounts[i].size();
        for(int j=0;j<n;j++)
        {
            sum+=accounts[i][j];
        }
        if(sum >= max)
          {
             max=sum;
          }
          sum=0;

    }
    return max;

    }
};