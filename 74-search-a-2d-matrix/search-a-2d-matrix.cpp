class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // Optimal-> i can flatten the 2d matrrix into 1d matrix in my head only then apply the binary search and using this when i found the mid the i have to map that 1d cordinate of mid with 2d cordinate of matrix it will take O(log(n*m)).

        int n = matrix.size();
        int m = matrix[0].size();

        int low = 0;
        int high = n*m-1;

        while(low<=high){
            int mid = (low+high)/2 ;//--> gives 1d so i have to find row and column for that 1d cordinate 
            int row = mid/m;
            int col = mid%m;
            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]<target) low = mid+1;
            else{
                high = mid-1;
            }
        }
        return false;

    }
};