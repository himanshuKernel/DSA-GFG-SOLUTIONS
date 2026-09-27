class Solution {
  public:
    void reverseArray(vector<int> &arr,int i=0) {
        // code here
        int n=arr.size();
        if(i>=n/2) return;
        swap(arr[i],arr[n-i-1]);
        reverseArray(arr,i+1);
    }
};