class Solution {
public:
    string largestGoodInteger(string num) {
        string good="";
        for(int i=0;i<=num.length()-3;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                good=max(good,num.substr(i,3));
            }
        }
        return good;
    }
};
