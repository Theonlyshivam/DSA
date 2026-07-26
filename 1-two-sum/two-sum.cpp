class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //we can use hashmap as a better approach for this -> we can iterate over an array na dat every element we will subtract it with the target and check whether the result is in the map or not if yes then we an return the index of that and the element where we are standing in the array if not then we can directly store it into the map with their index as the valuse of the key;

        unordered_map<int,int>mp;
        vector<int>ans;

        int n = nums.size();
        for(int i=0;i<n;i++){
            int a = nums[i];
            int res = target - a;
            if(mp.find(res)!=mp.end()){
                ans.push_back(i);
                ans.push_back(mp[res]);
            }
            mp[a]=i;
        }
        return ans;
    }
};