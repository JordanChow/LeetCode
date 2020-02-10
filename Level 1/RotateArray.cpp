class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int>final;
        int count = 0;
        for(int index = nums.size(); index > 0; --index)
        {
            final[count] = nums[index-(k+2)];
            count++;
        }  
    }
};