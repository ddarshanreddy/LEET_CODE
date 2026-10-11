class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int rowdiff =0;
        int coldiff=0;
       rowdiff = (abs(target[0]-source[0]));
       coldiff = (abs(target[1]-source[1]));
     
       if((source[0]==target[0]) && (source[1]==target[1]))
       {
        return 0;
       }
       else if((source[0]==target[0]) || source[1]==target[1])
       {
        return 1;
       }
     
       else if(rowdiff == coldiff)
       {
        return 1;
       }
       else 
        return 2;

    }
};