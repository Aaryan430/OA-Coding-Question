#include <bits/stdc++.h>

#define all(x) x.begin(), x.end()
#define int long long int
#define ld long int
#define nl "\n"
#define ss second
#define ff first
using namespace std;

int MOD = 1000000007;
/*------------------------------------For Debugging-------------------------------------------------------------------------*/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x<<" "; _print(x); cerr << nl;
#else
#define debug(x...)
#endif

void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(double t) {cerr << t;}

template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
/*-------------------------------------------------------------------------------------------------------------------------*/
bool comp(const pair<pair<int, int>,int> &a, const pair<pair<int, int>,int> &b) { return (a.second < b.second); }
bool isPowerOfTwo(int n)   {if (n == 0)       return false;return (ceil(log2(n)) == floor(log2(n)));}
double abaseb(int a, int b)  {return log2(a) / log2(b);}
bool isPowerOfThree(int n)  {if (n == 0) return false; cout << abaseb(n, 3) << nl;int num1 = ceil(abaseb(n, 3));
                  int num2 = floor(abaseb(n, 3));if (num1 == num2)    return true;  else return false;}
int lcm(int a, int b) { return (a / __gcd(a, b)) * b; }
int countDivisors(int n)
{ int cnt = 0;for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0){ if (n / i == i) cnt++;
        else  cnt = cnt + 2; } }
    return cnt;
}
bool isPrime(int n)
{ if (n <= 1) return false;
  for (int i = 2; i * i <= n; i++)      if (n % i == 0){ return false;}
    return true;
}
string bin(int n){
    int i;string val = "0";
    for (i = 1 << 30; i > 0; i = i / 2)
    { if((n & i) != 0) { val+="1"; }
    else { val+="0"; } }
    while(val.front()=='0'){ val.erase(0,1); }
    return val;
}
int DivOrNot(int n1, int n2){ if(n1 % n2 == 0)  return n1/n2; else return (n1/n2)+1;}
int is_string_palindrome(string b){ string n = b; reverse(all(n)); if(n==b) return 1;return 0;}
/*----------------------------------------Template Ends-----------------------------------------------------------------*/
void todo()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0;i<n;i++){
        cin >> a[i];
    }
    sort(all(a));
    int l = 0;
    int r = n+2;
    vector<int> k = a;
    while(l+1<r){
        a = k;
        int stage = (l+r)/2;
        bool win = true;
        for(int j  = 1;j<=stage;j++){
            int val = stage-j+1;
            auto value = upper_bound(all(a),val);
            if(value == a.begin()){
                win = false;
                break;
            }
            value--;

            a.erase(value);
            if(a.size()>=1){
                a[0]+=val;
            }
            sort(all(a));
        }
        if(win){
            l = stage;
        }
        else{
            r = stage;
        }
    }
    cout << l << nl;

}

signed main()
{
    // Fib
    int fib[10005];
    fib[0] = 0;fib[1] = 1;
    for(int i = 2; i <= 10005; i++){
       fib[i] = fib[i - 1] + fib[i - 2];}

    // Main Code
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int tt = 1;
    cin >> tt;
    for (int i = 1; i <= tt; i++)
    {
        // cout << "Case: " << i  << " ";
        todo();
    }

    return 0;
}