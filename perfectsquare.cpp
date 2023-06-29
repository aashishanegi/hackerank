// A naive recursive C++
// program to find minimum
// number of squares whose sum
// is equal to a given number
#include <bits/stdc++.h>
using namespace std;

// Returns count of minimum
// squares that sum to n
int getMinSquares(unsigned int n)
{
    // base cases
    // if n is perfect square then
    // Minimum squares required is 1
    // (144 = 12^2)
    if (sqrt(n) - floor(sqrt(n)) == 0)
        return 1;
    if (n <= 3)
        return n;

    // getMinSquares rest of the
    // table using recursive
    // formula
    // Maximum squares required
    // is n (1*1 + 1*1 + ..)
    int res = n;

   
