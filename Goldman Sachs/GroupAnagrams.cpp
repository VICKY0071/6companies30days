/*
link to the problem: https://practice.geeksforgeeks.org/problems/print-anagrams-together/1/
*/
class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> mp;
        for(string s : string_list){
            string s_x = s;
            sort(s_x.begin(), s_x.end());
            mp[s_x].push_back(s);
        }
        for(auto i : mp){
            res.push_back(i.second);
        }
        return res;
    }
};
