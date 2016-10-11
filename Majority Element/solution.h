class Solution{
public:
	int majorityElement(vector<int>& nums){
		map<int,int> mapp;
		int i;
		int len = nums.size();
		for(i=0; i<len; i++){
			++map[nums[i]];
			if(mapp[nums] > len/2){
				return nums[i];
				}
			}
		return nums[i];
		}
	};	
