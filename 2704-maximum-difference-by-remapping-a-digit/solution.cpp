class Solution {
public:
    int minMaxDifference(int num) {
        string s=to_string(num);
        string max=s;
        for(char c:s){
            if(c!='9'){
                for(char &ch:max){
                    if(ch==c) ch='9';
                }
                break;
            }
        }
        string min=s;
        for(char c:s){
            if(c!='0'){
                for(char &ch:min){
                    if(ch==c) ch='0';
                }
                break;
            }
        }
        int maxVal=stoi(max);
        int minVal=stoi(min);
        return maxVal-minVal;
    }
};
