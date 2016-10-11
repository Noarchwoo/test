class Solution{
public:
	int majorityElement(vector<int>& nums){
		int i, major = nums[0], count = 1;
		int len = nums.size();
		for( i=0; i<len; i++){
			if(count = 0){
				major = nums[i];
				count = 1;
				}
			else if(nums[i] == major)
				count++;
			else count--;
		}
		return major;			
		}
	};
