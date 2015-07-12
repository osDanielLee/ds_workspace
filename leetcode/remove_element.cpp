#include "common.h"

class Solution {
	public:
		    int removeElement(vector<int>& nums, int val) {
			vector<int>::iterator start = nums.begin();
			vector<int>::iterator end = nums.end();
			int flag = 1;
			for(vector<int>::iterator it = start;it != end; ++it)
			{
				if(*it == val)
				{
					while(*(end-1) == val)
					{
						--end;
						if(end == it)
							flag = 0;
					}
					if(flag)
					{
						*it = *(end-1);
						--end;
					}
					else{
						break;
					}
				}		
			}
			return end-start;
			        }
};



int main()
{
	Solution *sol;
	vector<int> nums;
	nums.push_back(1);
	cout << sol->removeElement(nums,1) << endl;

}
