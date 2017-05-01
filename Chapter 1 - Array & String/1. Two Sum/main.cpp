/*
Question:
Given an array of integers, find two numbers such that they add up to a specific target
number.
The function twoSum should return indices of the two numbers such that they add up to
the target, where index1 must be less than index2.
You may assume that each input would have exactly one solution.

Link: https://oj.leetcode.com/problems/two-sum/
 */

class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        vector<int> res;
        int n = numbers.size();
        int *a = new int[n];
        for(int i = 0;i < n;i++)    a[i] = numbers[i];
        sort(numbers.begin(),numbers.end());
        int lhs = 0,rhs = n-1;
        while(rhs > lhs){
            if(numbers[lhs] + numbers[rhs] > target)    rhs--;
            else if(numbers[lhs] + numbers[rhs] < target)   lhs++;
            else{
                int id1,id2;
                for(int i = 0;i < n;i++){
                    if(a[i] == numbers[lhs]){
                        id1 = i;
                        break;
                    }
                }
                for(int i = n - 1;i >= 0;i--){
                    if(a[i] == numbers[rhs]){
                        id2 = i;
                        break;
                    }
                }
                res.push_back(min(id1,id2));
                res.push_back(max(id1,id2));
                return res;
            }
        }
    }
};