#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int countPrimes(int n) {
        int cnt =0;
        vector<bool> prime (n+1,true);

        prime [0]= prime [1]=false;

        for(int i=2; i<n; i++)
        {
            if(prime[i])
            {
                cnt ++;

                for(int j=2*i; j<n; j=j+i)
                {
                    prime [j]=0;
                }
            }
        }
        return cnt;
    }
};

int main() {
    int n = 100; // example value for n
    Solution s;
    int count = s.countPrimes(n);
    cout << "Number of primes less than " << n << ": " << count << endl;
    return 0;
}

/*
Initialize a variable 'cnt' to count the number of primes and a boolean vector 'prime' of size 'n+1' to keep track of primes.

Mark prime[0] and prime[1] as false as 0 and 1 are not prime numbers.

Loop through integers from 2 to n-1.

If prime[i] is true, it means i is a prime number.

Increment cnt as i is a prime number.

Mark all multiples of i as composite by setting prime[j] to false for j = 2i, 3i, 4*i,..., n-1.

Return the count of primes.
*/