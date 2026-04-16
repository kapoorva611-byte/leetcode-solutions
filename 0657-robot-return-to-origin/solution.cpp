class Solution {
public:
    bool judgeCircle(string moves) {
        int Lcount=0,Rcount=0,Ucount=0,Dcount=0;
        for(int i=0;i<moves.size();i++){
            if (moves[i]=='L'){
                Lcount++;
            }
            if (moves[i]=='R'){
                Rcount++;
            }
            if (moves[i]=='U'){
                Ucount++;
            }
            if (moves[i]=='D'){
                Dcount++;
            }
        }
        if(Lcount==Rcount && Ucount==Dcount){
            return true;
        }
        return false;
    }
};
