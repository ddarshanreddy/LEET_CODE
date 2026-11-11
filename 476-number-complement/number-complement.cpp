class Solution {
public:
    int findComplement(int num) {
        int temp=num;
        int bits=0;
        while(temp>0)
        {
            bits++;
            temp=temp/2;
        }
        int mask=(1U << bits)-1;

        return num^mask;
    }
};