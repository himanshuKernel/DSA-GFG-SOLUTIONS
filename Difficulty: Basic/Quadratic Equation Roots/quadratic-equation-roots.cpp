class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        double discriminant = (b * b) - (4.0 * a * c);

        if (discriminant < 0) return {-1};

        double root1 = (-b + sqrt(discriminant)) / (2.0 * a);
        double root2 = (-b - sqrt(discriminant)) / (2.0 * a);

        vector<int> roots = {static_cast<int>(floor(root1)), static_cast<int>(floor(root2))};

        if (roots[0] < roots[1]) {
            swap(roots[0], roots[1]);
        }

        return roots;
    }
};