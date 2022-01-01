/*
link to the problem: https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/#
*/
class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long prod = 1;
        int ans = 0;
        int j = 0;
        for(int i = 0;i<n;i++){
            prod *= a[i];
            while(j < n && prod >= k){
                prod /= a[j];
                j++;
            }
            if(prod < k)    ans += (i - j + 1);
        }
        return ans;
    }
};
