class Solution {
public:
    int uniquePaths(int m, int n)
    {
        vector<int> dp(n, 1);
        for(i = 1; i < m; ++i)
        {
            for(int j = 1; j < n; ++j)
            {
                dp[j] += dp[j-1];
            }
        }

        return dp[n-1]
    }

	int uniquePaths2(int m, int n)
	{
		int num = 1, denom = 1;
		int small = m > n ? n : m;

		for (int i = 1; i < small; ++i)
		{
			num *= m + n - 1 - i;
			denom *= i;
		}

		return (int)(num / denom);
	}
};