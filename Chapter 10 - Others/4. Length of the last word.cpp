#include "stdafx.h"
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string sInput;
	int iCount = 0;
	getline(cin, sInput);
	int i = sInput.length() - 1;
	bool bFindLastWord = false;

	while (i >= 0)
	{
		if (!isalpha(sInput[i]))
		{

		}
		else
		{
			iCount++;
			bFindLastWord = true;
		}

		if (bFindLastWord && !isalpha(sInput[i]))
		{
			break;
		}

		i--;
	}

	cout << iCount << endl;
	system("pause");
	return 0;
}