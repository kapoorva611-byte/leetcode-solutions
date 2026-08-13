class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int sum=0, count=0;
        sort(costs.begin(),costs.end());
        for(int cost:costs){
            if(cost>coins) break;
            count++;
            coins-=cost;
        }
        return count;
    }
};
