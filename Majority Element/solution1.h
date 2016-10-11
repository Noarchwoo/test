class Solution{
public:
	int majorityElement(vector<int>& nums){
		int i;
		sort(nums.begin(), nums.end());
		return nums[nums.size()/2];
		}
	};
