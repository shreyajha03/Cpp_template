// SHREYA JHA
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define pb push_back
#define endl '\n'
// __builtin_popcount(int n)
// __builtin_popcountl(long int n)
// __builtin_popcountll(long long n)
void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);
    }
    cout << endl;
}
bool checkSetBit(int a, int i)
{
    if ((a & (1 << i)) != 0)
        return 1; // set bit
    return 0;     // unset bit
}
void setABit(int a, int i)
{
    printBinary(a | (1 << i));
}
void unsetABit(int a, int i)
{
    printBinary(a & (~(1 << i)));
}
// xor toggles a bit
void toggleABit(int a, int i)
{
    printBinary(a ^ (1 << i));
}

// bitcount - no of set bits
int bitCount(int a)
{
    int cnt = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (checkSetBit(a, i) == 1)
            cnt++;
    }
    return cnt;
}
void solve(int n)
{
    return;
}
int32_t main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        solve(n);
    }
    return 0;
}
