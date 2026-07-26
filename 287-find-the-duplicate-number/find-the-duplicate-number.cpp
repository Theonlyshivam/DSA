class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // use slow - fast pointer , imagine an array as linklist and the move slow by 1 and fast by 2 and whenever slow == fast then , again start slow from 0th index and now move slow by 1 and fast by when now whenever slow == fast then that is the element which is reapeating.


        int slow = nums[0];
        int fast = nums[0];

        do{
            slow = nums[slow]; //+1
            fast = nums[nums[fast]]; //+2;
        } while(slow!=fast);

        slow =  nums[0];
        while(slow!=fast){
            slow=nums[slow]; //+1
            fast = nums[fast];//1;

        }
        return slow;
    }
};