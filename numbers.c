// C++ implementation of above approach
 
#include <bits/stdc++.h>
using namespace std;
 
// Function to check
// if the given number is divisible
// by sum of its digits
string isDivisible(long int n)
{
    long long int temp = n;
 
    // Find sum of digits
    int sum = 0;
    while (n) {
        int k = n % 10;
        sum += k;
        n /= 10;
    }
 
    // check if sum of digits divides n
    if (temp % sum == 0)
        return "TRUE";
 
    return "FALSE";
}
 
int main()
{
    long int n = 75;
 
    cout << isDivisible(n);
 
    return 0;
}
