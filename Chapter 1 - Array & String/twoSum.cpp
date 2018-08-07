class Solution {
public:

	vector<int> twoSum(vector<int>& vNums, int iTarget)
	{
		unordered_map<int, int> m;
		vector<int> vResult;

		for (int i = 0; i < vNums.size(); i++)
		{
			m[vNums[i]] = i;
		}

		for (int i = 0; i < vNums.size(); i++)
		{
			int t = iTarget - vNums[i];

			if (m.count(t) && m[t] != i)
			{
				vResult.push_back(i);
				vResult.push_back(m[t]);

				return vResult;
			}
		}

		return {};
	}
};