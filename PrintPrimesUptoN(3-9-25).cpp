bool isPrime(int n) {
    if (n < 2) return false;          // numbers < 2 are not prime
  //optimisation here aslo as in divisors.to print primes numbers
    for (int i = 2; i * i <= n; i++) {
      //So, if you already checked all numbers up to 6, you would have caught the factor. 
        if (n % i == 0) return false; // divisible by something
    }
    return true;                      // no divisors → prime
}
class Solution {
  public:
    vector<int> primesUptoN(int n) {
        vector<int> primes;
        for (int i = 2; i <= n; i++) {
            if (isPrime(i)) {
                primes.push_back(i);
            }
        }
        return primes;
    }
};
//tc:o(n root n)
//sc: If the problem says “analyze the algorithm” →
// 👉 Say Auxiliary SC = O(1) (since you don’t allocate arrays, just a few variables).

// If the problem says “including the output” →
// 👉 Say O(n) (since you’re storing the primes in a vector).
