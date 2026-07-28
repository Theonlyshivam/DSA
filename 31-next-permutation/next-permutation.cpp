class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        //->BRUTE -> GERNRATE all possible permutations->perform liner search for the given array then-> return just next permutation of given array//
        // ->LIttle better ->this is the inbuild C++ STL so 
        next_permutation(nums.begin(),nums.end());
    }
};