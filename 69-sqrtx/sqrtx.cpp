class Solution {
public:
    int mySqrt(int x) {
     int ans=0;
     long long low =0,mid,y;
    long long high=x;
     while(low<=high)
     {
         mid=(low+high)/2;
         y=(mid*mid);
        if(y==x)
        {
           ans =mid;
            break;
        }
        else if(y<x)
        {
            low=mid+1;
            ans=(int)mid;
        }
        else{
            high=mid-1;
        }
     }

     return ans;
    }
};

