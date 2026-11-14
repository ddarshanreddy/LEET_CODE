class Solution {
public:
    int countPrimes(int n) {
        // If n is less than or equal to 2, no prime numbers exist below n
        if(n<=2)
        {
            return 0;
        }
         // Create a boolean array and initially assume all numbers are prime
        vector <bool> arr (n,true);
        int cnt=0;
         // 0 and 1 are not prime numbers
       arr[0]=0;
       arr[1]=0;
       // Iterate through numbers up to the square root of n
        for(int i=2;i*i<n;i++){
             // If the current number is prime
            if(arr[i]==true)
            {
                // Mark all multiples of i as non-prime
                // Start from i*i because smaller multiples are already marked
                for(int j=i*i;j<n;j+=i)
                {
                    arr[j]=false;
                }
            }
        }
         // Count all numbers that are still marked as prime
        for (int i=2;i<n;i++)
        {
            if(arr[i])
            {
                cnt++;
            }
        }
         // Return the total count of prime numbers
        return cnt;
    }
};