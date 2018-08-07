//O(n) runtime, O(1) space - Two pointers;
class Solution {
public:
	vector<int> twoSum(vector<int>& vNums, int iTarget)
	{
		int i = 0, j = vNums.size() - 1;
		vector<int> vResult;

		while (i < j)
		{
			int iSum = vNums[i] + vNums[j];
			
			if (iSum < iTarget)
			{
				i++;
			}
			else if (iSum > iTarget)
			{
				j--;
			}
			else
			{
				vResult.push_back[i];
				vResult.push_back[j];
			}
		}
	}
};