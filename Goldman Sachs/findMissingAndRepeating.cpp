/*
link to the problem: https://practice.geeksforgeeks.org/problems/find-missing-and-repeating2512/1/
*/
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        for(int i = 0;i<n;i++){
            while(arr[i] != i + 1 && arr[i] != arr[arr[i] - 1]){
                swap(arr[i], arr[arr[i] - 1]);
            }
        }
        int * res = new int[2];
        for(int i = 0;i<n;i++){
            if(arr[i] != i + 1){
                res[0] = arr[i];
                res[1] = i + 1;
            }
        }
        return res;
    }
};

