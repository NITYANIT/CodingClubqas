
//optimal solution in tc o(sqrt(n))
//sc o(root n )
class Solution {
  public:
    void print_divisors(int n) {
        vector<int> small, large;
        
        for (int i = 1; i * i <= n; i++) {
            if (n % i == 0) {
                small.push_back(i);       // divisor i
                if (i != n / i) {
                    large.push_back(n / i); // paired divisor
                }
            }
        }
        
        // print small divisors (already in ascending order)
        for (int x : small) {
            cout << x << " ";
        }
        // print large divisors in reverse (to make ascending order overall)
        for (int i = large.size() - 1; i >= 0; i--) {
            cout << large[i] << " ";
        }
    }
};
