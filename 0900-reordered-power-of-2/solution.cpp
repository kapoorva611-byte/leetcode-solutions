class Solution {
public:
    string sorting(int n){
        string s=to_string(n);
        sort(s.begin(),s.end());
        return s;
    }
    bool reorderedPowerOf2(int n) {
        string target=sorting(n);
        for(int i=0;i<32;i++){
            int power=1ll<<i;
            if(sorting(power)==target){
                return true;
            }
        }
        return false;
    }
};
