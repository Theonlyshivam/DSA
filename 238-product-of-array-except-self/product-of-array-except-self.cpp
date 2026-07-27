class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        // i have to find the prefix product first means where i am standing i have to find the product of all elements just before that element where  i am standing  ,, and i same way i have to find the suffix means i need to find the product of all elemnts just after where i am standing and then just product prefix and suffix->ans;
        // NOW FOR SPACE OPTIMIZATION WE CAN DIRECTLY STROE THE PREFIX PRODUCT INTO MY ANS ARRAY AND FOR SUFFIX I CAN TAKE ONE SUFFIX VARIABLE INITAILIZE WITH 1 ANS JUST FIND THE SUFFIX PRODUCT AND DIRECTLY STROE AT ANS[I];
        int n = nums.size();
        vector<int>ans(n,1);
         

          //prefix

          for(int i=1;i<n;i++){
            ans[i] = ans[i-1]*nums[i-1];
          }
          
          //suffix
          int suffix = 1;
          for(int i=n-2;i>=0;i--){
            suffix *= nums[i+1];
            ans[i] *= suffix;
          }

          
          return ans;

    }
};