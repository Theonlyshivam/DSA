class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& arr) {
        // I can sort it first so that the simplier one will be to the next only; now , i will iterate over intervalas and then check the lest element of first interval and the first element of the just next interval and if the end >start of next interval it means that next interval actually should the part of the previous interval;

        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<vector<int>>ans;
        for(int i=0;i<n;i++){
            int start = arr[i][0];
            int end = arr[i][1];
            if(!ans.empty() && end<=ans.back()[1]){
                continue;
            }
            for(int j=i+1;j<n;j++){
                if(arr[j][0]<=end){
                    end = max(end,arr[j][1]);
                }
                else{
                    break;
                }
            }
            ans.push_back({start,end});
        }
        return ans;
    }
};