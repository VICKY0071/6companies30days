/* 
link to the problem: https://leetcode.com/problems/minimum-size-subarray-sum/
*/
class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        const int n = nums.size();
        int j = 0;
        int res = INT_MAX;
        int t = 0;
        for(int i = 0;i<n;i++){
            t += nums[i];
            while(t >= target){
                res = min(res, i - j + 1);
                t -= nums[j];
                j++;
            }
        }
        return (res == INT_MAX ? 0 : res);
    }
};
