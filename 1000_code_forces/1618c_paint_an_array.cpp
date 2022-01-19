#include <bits/stdc++.h>
#include <algorithm>
#include <numeric>
#define endl '\n'
#define ll long long int
#define loop(i, a, b) for (ll i = a; i <= b; ++i)
#define boost ios_base::sync_with_stdio(0);
#define eb emplace_back
#define mp make_pair
#define clr(x) x.clear()
#define MOD 1e9 + 7
#define itoc(c) ((int)(((int)'0') + c))
#define ctoi(c) ((int)(((int)c) - '0'))
#define all(p) p.begin(), p.end()
#define iscn(num) scanf("%d", &num);
#define scn(num) scanf("%lld", &num);
#define scn2(num, num2) scanf("%lld%lld", &num, &num2);

using namespace std;
///////////////////////

#define sim template <class c
#define ris return *this
#define dor > debug &operator<<
#define eni(x)                                                                    \
    sim > typename enable_if<sizeof dud<c>(0) x 1, debug &>::type operator<<(c i) \
    {
sim > struct rge
{
    c b, e;
};
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c *x) -> decltype(cerr << *x, 0);
sim > int dud(...);
struct debug
{
#ifdef PAUL
    ~debug()
    {
        cerr << endl;
    }
    eni(!=) cerr << boolalpha << i;
    ris;
} eni(==) ris << range(begin(i), end(i));
}
sim, class b dor(pair<b, c> d)
{
    ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d)
{
    *this << "[";
    for (auto it = d.b; it != d.e; ++it)
        *this << ", " + 2 * (it == d.b) << *it;
    ris << "]";
}
#else
    sim dor(const c &)
    {
        ris;
    }
#endif
}
;
#define dbg(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "

#ifdef ONLINE_JUDGE
#define cerr   \
    if (false) \
    cerr
#endif

////////////////////////

template <typename T>
T set_bit(T N, T pos) { return N = N | (1 << pos); }
template <typename T>
T reset_bit(T N, T pos) { return N = N & ~(1 << pos); }
template <typename T>
bool check_bit(T N, T pos) { return (bool)(N & (1 << pos)); }
template <typename T>
void bin_print(T N)
{
    bitset<25> bit(N);
    cerr << bit.to_string() << "\n";
}
template <typename T>
void max_self(T &a, T b)
{
    a = max(a, b);
}
template <typename T>
void min_self(T &a, T b)
{
    a = min(a, b);
}
template <typename T>
void add_self(T &a, T b)
{
    a += b;
}
////////////////////////

template <typename T>
void ara_read(T &v, ll n)
{
    ll temp;
    for (ll i = 0; i < n; i++)
    {
        scanf("%lld", &temp);
        v.emplace_back(temp);
    }
}
template <typename T>
void ara_print(T &v)
{
    for (ll x : v)
        printf("%lld ", x);
    puts("");
}
////////////////////////
const int INF = 1e9 + 99;
typedef pair<int, int> Pair;
typedef vector<int> vec;
int gcdofvector(vector<ll> &arr, ll idx)
{
    if (idx == arr.size() - 1)
        return arr[idx];
    ll a = arr[idx];
    ll b = gcdofvector(arr, idx + 1);
    return __gcd(a, b);
}
bool check(vector<ll> &arr, ll a)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] % a == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    ll l = 0;
    cin >> l;

    for (int i = 0; i < l; i++)
    {

        ll n;
        cin >> n;
        vector<ll> vec_even;
        vector<ll> vec_odd;
        for (int i = 1; i < n + 1; i++)
        {
            ll c;
            cin >> c;
            if (i % 2 == 0)
                vec_even.push_back(c);
            else
                vec_odd.push_back(c);
        }
        ll p = gcdofvector(vec_even, 0);
        ll q = gcdofvector(vec_odd, 0);
        if (check(vec_even, q))
            cout << q << "\n";
        else if (check(vec_odd, p))
            cout << p << "\n";
        else
            cout << "0"
                 << "\n";

    }

    return 0;
}