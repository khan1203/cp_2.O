/*
    ╔═══════════════════════════════════════════════════════╗
    ║        Auther: Khan Muhammad Rifat                    ║
    ║        Computer Science and Engineering, BUBT         ║
    ╚═══════════════════════════════════════════════════════╝
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define PB push_back
#define F first
#define S second
#define MP make_pair
#define endl '\n'
#define all(a) (a).begin(), (a).end()
#define sz(x) (int)x.size()
#define mid(l, r) ((r + l) / 2)
#define left(node) (node * 2)
#define right(node) (node * 2 + 1)
#define mx_int_prime 999999937
#define yes (cout << "YES\n")
#define no (cout << "NO\n")
#define print(x) (cout << x << endl)

const double PI = (2.0 * acos(0.0));
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a, b) memset(a, b, sizeof(a))
#define GCD(a, b) __gcd(a, b)
#define LCM(a, b) ((a / __gcd(a, b)) * b)
#define sqr(a) ((a) * (a))

#define optimize()                \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define fraction()                \
    cout.unsetf(ios::floatfield); \
    cout.precision(10);           \
    cout.setf(ios::fixed, ios::floatfield);
#define file()                        \
    freopen("inputf.in", "r", stdin); \
    freopen("outpuft.out", "w", stdout);

typedef vector<int>::iterator vit;
typedef set<int>::iterator sit;

int dx[] = {0, 0, +1, -1};
int dy[] = {+1, -1, 0, 0};
// int dx[] = {+1, 0, -1, 0, +1, +1, -1, -1};
// int dy[] = {0, +1, 0, -1, +1, -1, +1, -1};

template <typename F, typename S>
ostream &operator<<(ostream &os, const pair<F, S> &p)
{
    return os << "(" << p.first << ", " << p.second << ")";
}

template <typename T>
ostream &operator<<(ostream &os, const vector<T> &v)
{
    os << "{";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "}";
}

template <typename T>
ostream &operator<<(ostream &os, const set<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename T>
ostream &operator<<(ostream &os, const multiset<T> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << *it;
    }
    return os << "]";
}

template <typename F, typename S>
ostream &operator<<(ostream &os, const map<F, S> &v)
{
    os << "[";
    for (auto it = v.begin(); it != v.end(); ++it)
    {
        if (it != v.begin())
            os << ", ";
        os << it->first << " = " << it->second;
    }
    return os << "]";
}

#define dbg(args...)            \
    do                          \
    {                           \
        cerr << #args << " : "; \
        faltu(args);            \
    } while (0)

void faltu()
{
    cerr << endl;
}

template <typename T>
void faltu(T a[], int n)
{
    for (int i = 0; i < n; ++i)
        cerr << a[i] << ' ';
    cerr << endl;
}

template <typename T, typename... hello>
void faltu(T arg, const hello &...rest)
{
    cerr << arg << ' ';
    faltu(rest...);
}

string decimalToBinayString(ll a)
{
    string binary = "";
    ll mask = 1;
    for (ll i = 0; i < 63; i++)
    {
        if ((mask & a) >= 1)
            binary = "7" + binary;
        else
            binary = "0" + binary;
        mask <<= 1;
    }
    // cout<<binary<<endl;
    return binary;
}

int countSetBits(int n)
{
    return __builtin_popcount(n);
}
bool isFloat(double n)
{
    double intpart;
    double frac = modf(n, &intpart);
    return frac != 0.0;
}

int main()
{
    optimize();
    int tc = 1;
    // cin >> tc;
    while (tc--)
    {
        string str;
        cin >> str;

        bool allup = true;
        bool lowup = true;

        for (char c : str)
        {
            if (c>='a' and c<='z')
            {
                allup = false;
                break;
            }
        }

        for (int i = 1; i < str.size(); i++)
        {
            if (str[i]>='a' and str[i]<='z')
            {
                lowup = false;
                break;
            }
        }

        if (allup || lowup)
        {
            for (char &c : str)
            {
                if (c>='A' and c<='Z')
                    c = c+32;
                else
                    c = c-32;
            }
        }

        cout << str << endl;
    }

    return 0;
}