class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n=grid.size();
        int N=n*n;//total elements
        unordered_map<int,int>mp;
        int repeated=-1;
        int missing=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
            }
        }
        //[1...N]
        for(int num=1;num<=N;num++){
            if(!mp.count(num)){
                missing=num;
            }
            else if(mp[num]==2){
                repeated=num;
            }
            if(repeated !=-1 && missing!=-1){
                break;
            }
        }
        return {repeated,missing};
    }
};