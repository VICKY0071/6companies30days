/*
link to the problem: https://practice.geeksforgeeks.org/problems/run-length-encoding/1/
*/
string encode(string src)
{     
    const int n = src.size();
    int i = 0;
    string res = "";
    while(i < n){
        int j = i + 1;
        while(j < n && src[j] == src[i]){
            j++;
        }
        res += src[i] + to_string(j - i);
        i = j;
    }
    return res;
}     
