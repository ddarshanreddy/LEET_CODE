class Solution {
public:
    int minQueenMoves(vector<int>& source, vector<int>& target) {
        int rowdiff =0;
        int coldiff=0;
       rowdiff = (abs(target[0]-source[0]));
       coldiff = (abs(target[1]-source[1]));
     //target location and the corce location aree same 
       if((source[0]==target[0]) && (source[1]==target[1]))
       {
        return 0;
       }
       //condition for when the coordinates are tat exactly diagonal 
       else if((source[0]==target[0]) || source[1]==target[1])
       {
        return 1;
       }
     //condition when the  cordinates are diagonal at some places
       else if(rowdiff == coldiff)
       {
        return 1;
       }
       //condition when there is need of more movement of coordinste through an inermediate 
       else 
        return 2;

    }
};