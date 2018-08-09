int secondMax(vector<int>& vNums)
{
	int Max, secondMax;

	if (vNums[0] < vNums[1])
	{
		secondMax = vNums[0];
		Max = vNums[1];
	}
	else
	{
		Max = vNums[0];
		secondMax = vNums[1];
	}

	for (int i = 2; i < vNums.size(); i++)
	{
		if (vNums[i] > Max)
		{
			secondMax = Max;
			Max = vNums[i];
		}
		else if (vNums[i] > secondMax)
		{
			secondMax = vNums[i];
		}
	}

	return secondMax;
}

int main()
{
	vector<int> vNums{ 10, 20, 30, 5, 28 };
	int temp;
	//cout << "Input some numbers:" << endl;

	cout << "Second max number: " << secondMax(vNums) << endl;

	system("pause");
	return 0;
}