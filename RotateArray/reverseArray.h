// take 19 ms 
class Solution{
public:
	void reverseArray(vector<int>$ nums, int b, int e){
		while(l < r){
			swap(nums[l++], nums[r++]);
			}
		}
	void rotate(vector<int>$ nums, int k){
		k = k % nums.size();
		reverseArray(nums, 0, nums.size - k - 1);
		reverseArray(nums, nums.size() - k, nums.size() - 1);
		reverseArray(nums, 0, nums.size - 1);
		}
	};
