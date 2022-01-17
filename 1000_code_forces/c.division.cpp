#include <bits/stdc++.h>
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

void add_using_linear_probing(int hash[], int a)
{
    //hash function h(x)=x%10
    int k = a;

    //linear probing
    while (true) {
        if (hash[k] == -1) {
            hash[k] = a;
            break;
        }
        k = (k /2) ; //linear increment of probe
        if (k<0)
        {
            cout << "No";
            break;
        }
        
    }
}

int main()
{
    //set of input numbers
    vector<int> arr{ 1, 2, 3, 4, 5 ,8,8,8};

    //initialize the hash table
    //each entry of the hash table is a single entry
    int hash[10]; //size of hashtable is 10
    memset(hash, -1, sizeof(hash)); //initialize with empty initially

    for (int a : arr) {
        //hashing
        add_using_linear_probing(hash, a);
    }

    cout << "---------using linear probing---------\n";

    cout << "Hash table is:\n";

    for (int i = 0; i < 10; i++) {
        if (hash[i] == -1)
            cout << i << "->"
                 << "Empty" << endl;
        else
            cout << i << "->" << hash[i] << endl;
    }

    return 0;
}
