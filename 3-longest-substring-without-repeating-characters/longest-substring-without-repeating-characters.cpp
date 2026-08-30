class Solution {
public:
    int lengthOfLongestSubstring(string s) {
     int n=s.length();
     int l=0,r=0,maxlen=0;
     int arr[256]={0};
     while(r<n){
        arr[s[r]]++;
        while(arr[s[r]]>1){
            arr[s[l++]]--;
        }
        maxlen=max(maxlen,r-l+1);
        r++;
     }
     return maxlen;
    }
};