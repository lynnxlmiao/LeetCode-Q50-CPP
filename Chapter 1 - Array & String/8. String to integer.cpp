class Solution {
public:
    int myAtoi(string str) 
    {
        if(str.empty())
        {
            return 0;
        }

        int iAns = 0, iSign = 1, i = 0;

        while(str[i] == ' '|| str[i] == '\t')
        {
            ++i;
        }

        if(i == str.length())
        {
            return 0;
        }

        if(str[i] == '+')
        {
            ++i;
        }
        else if(str[i] == '-')
        {
            iSign = -1;
            ++i;
        }

        for(; i < str.length() && isdigit(str[i]); ++i)
        {
            if(iAns > (numeric_limits<int>::max() - (str[i] - '0')) / 10)
            {
                return iSign > 0 ? numeric_limits<int>::max() : numeric_limits<int>::min();
            }

            iAns *= 10;
            iAns += str[i] - '0';
        }

        iAns *= iSign;
        return iAns;
    }
};