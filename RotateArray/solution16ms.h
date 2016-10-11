//this take 16ms beat 94.45%
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int len = nums.size(),i;
        int *temp = new int[len];
        for(i=0; i<len; i++){
            temp[(i+k)%len] = nums[i];
        }
        for(i=0; i<len; i++){
            nums[i] = temp[i];
        }
		delete temp;
        
    }
};
