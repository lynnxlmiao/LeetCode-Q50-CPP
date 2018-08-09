vector<int> filterNumber(vector<int> &a, vector<int> &b)
{
	vector<int> vResult;
	bool bContains = false;

	for (int i = 0; i < a.size(); i++)
	{
		int j = 0;
		bContains = false;

		while (j < b.size())
		{
			if (a[i] == b[j])
			{
				bContains = true;
				break;
			}
			j++;
		}

		if (!bContains)
		{
			vResult.push_back(a[i]);
		}
	}

	return vResult;
}

int main()
{
	vector<int> a{ 1,2,3,5,7 };
	vector<int> b{ 2,3,7 };

	vector<int> vResult = filterNumber(a, b);

	cout << "Result: " << endl;

	for (vector<int>::iterator iter = vResult.begin(); iter != vResult.end(); iter++)
	{
		cout << *iter << endl;
	}

	system("pause");
	return 0;
}