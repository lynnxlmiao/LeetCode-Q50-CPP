class Solution {
public:
	void reverseWords(string &s) 
	{
		if (s.size() == 0) return;

		int left = 0, right = 0, i = 0;

		while (i < s.size())
		{
			while (i < s.size() && s[i] == ' ') i++;
			if (i >= s.size()) break;
			if (left != right) s[right++] = ' ';
			left = right;
			while (i < s.size() && s[i] != ' ') s[right++] = s[i++];
			reverse(s.begin() + left, s.begin() + right);
		}
		s.resize(right);
		reverse(s.begin(), s.end());
	}

	void reverseWords2(string &s)
	{
		int storeIndex = 0, n = s.length();
		reverse(s.begin(), s.end());

		for (int i = 0; i < n; ++i)
		{
			if (s[i] != ' ')
			{
				if (storeIndex != 0)
				{
					s[storeIndex++] = ' ';
				}

				int j = i;
				while (j < n && s[j] != ' ')
				{
					s[storeIndex++] = s[j++];
				}

				reverse(s.begin() + storeIndex - (j - i), s.begin() + storeIndex);
				i = j;
			}
		}
		s.resize(storeIndex);
	}
};