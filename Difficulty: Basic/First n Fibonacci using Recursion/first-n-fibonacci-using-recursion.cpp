class Solution {
  public:
    vector<int> fibonacciNumbers(int n) {
        // Base cases
                if (n == 1) return {0};
                if (n == 2) return {0, 1};

                // Recursive call to get the first n-1 elements
                vector<int> res = fibonacciNumbers(n - 1);

                // Add the last two elements and push to the vector
                res.push_back(res[res.size() - 1] + res[res.size() - 2]);

                return res;
    }
};
