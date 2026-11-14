class Solution {
public:
    int countPrimes(int n) {
        if(n<=2)
        {
            return 0;
        }
        vector <bool> arr (n,true);
        int cnt=0;
       arr[0]=0;
       arr[1]=0;
        for(int i=2;i*i<n;i++){
    
            if(arr[i]==true)
            {
                for(int j=i*i;j<n;j+=i)
                {
                    arr[j]=false;
                }
            }
        }
        
        for (int i=2;i<n;i++)
        {
            if(arr[i])
            {
                cnt++;
            }
        }
        return cnt;
    }
};