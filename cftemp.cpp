// SHREYA JHA
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ld long double
#define pb push_back
#define endl '\n' 

// right shift (>>1) - division by 2, left shift(<<1) - multiplication by 2

// __builtin_popcount(int n)  // builtin func to calc set bit
// __builtin_popcountl(long int n) // more than 31 
// __builtin_popcountll(long long n)
void printBinary(int num)
{
    for (int i = 10; i >= 0; i--)
    {
        cout << ((num >> i) & 1);  //i th bit ko zeroth pos pe le jakar check kar rahe hai if it's 1 or 0
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
// check odd or even (bit manipulation is faster than modulo operator)
bool check(int i){
    if(i&1!=0) return 0; // odd
    else return 1;    // even
}

// check power of 2
bool checkpow2(int n){
    if(n&(n-1)) return 0; // not power of 2
    else return 1;        // power of 2
}
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return gcd(b, a % b); // tc - O(log(min(a,b)))
}

// conversion of uppercase to lowercase
// binary conversion of lowercase has bit next to msb is set 
void conversion(char c){
    // // upper to lower - set 
    // cout<<char(c|(1<<5));
    // // lower to upper - unset
    // cout<<char(c&(~(1<<5)));
    // u to l
    char B = 'B';
    char b = B | ' ';
    cout<<b<<endl;

    // l to u
    char d = 'd';
    char D = (d&'_');
    cout<<D<<endl;

    return;
}

void solve(vector<int> v, int n, int k)
{
  
    return;
}
int32_t main()
{
    int t;
    cin>>t;
    while(t--){
    int n, k;
    cin >> n>>k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    solve(v, n, k);
    }
    return 0;
}
