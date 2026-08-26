class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int>count;
        int ans;
        int n=nums.size();
        for(auto x:nums){
            count[x]++;
        }
        for(auto x:nums){
            if(count[x]==1){
            ans=x;
            }
        }
        return ans;
    }
};