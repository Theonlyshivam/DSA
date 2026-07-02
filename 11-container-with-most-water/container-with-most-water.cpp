class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int n = height.size();
        int left =0;
        int right = n-1;
        while(left<right){
            int width = right - left;
            int hei = min(height[left],height[right]);
            int currentWater = width*hei;
            maxWater = max(maxWater,currentWater);


            height[left]<height[right] ? left++ : right--;
        }
        return maxWater;
    }
};