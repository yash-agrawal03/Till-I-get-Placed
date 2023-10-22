#include <bits/stdc++.h>
using namespace std;

typedef long long int ll;
#define INF 1e14
#define SINF 1e9
#define PI 3.14159265358979323846
#define dd double
#define MOD 1000000007
#define nl cout << endl
#define fill(a, val) memset(a, val, sizeof(a))
#define mp(e1, e2) make_pair(e1, e2)
#define endl "\n"
#define pb(e) push_back(e)
#define ff first
#define ss second
#define lc(x) 2 * x + 1
#define rc(x) 2 * x + 2
#define all(v) v.begin(), v.end()
#define s(ar, n) sort(ar, ar + n)
#define rs(ar, n) sort(ar, ar + n, greater<ll>())
#define sv(v) sort(v.begin(), v.end())
#define rsv(v) sort(v.begin(), v.end(), greater<ll>())
#define aout(a, n)             \
    for (ll i = 0; i < n; i++) \
        cout << a[i] << " ";   \
    nl
#define ain(a, n)              \
    for (ll i = 0; i < n; i++) \
        cin >> a[i];
#define vin(v, n)              \
    for (ll i = 0; i < n; i++) \
    {                          \
        ll x;                  \
        cin >> x;              \
        v.pb(x);               \
    }
#define vout(v)            \
    for (auto it : v)      \
    {                      \
        cout << it << " "; \
    }                      \
    nl;
#define vll(v, n) \
    vector<ll> v; \
    vin(v, n);
#define summ(x, a, n)          \
    ll x = 0;                  \
    for (ll i = 0; i < n; i++) \
    {                          \
        x = x + a[i];          \
    }
#define maxa(ar, N) *max_element(ar, ar + N)
#define mina(ar, N) *min_element(ar, ar + N)
#define maxv(v) *max_element(v.begin(), v.end())
#define minv(v) *min_element(v.begin(), v.end())
#define max2(a, b) a > b ? a : b
#define min2(a, b) a < b ? a : b
#define max3(a, b, c) a > b ? (a > c ? a : c) : (b > c ? b : c)
#define min3(a, b, c) a < b ? (a < c ? a : c) : (b < c ? b : c)
#define reverse(a, n)              \
    for (ll i = 0; i < n / 2; i++) \
    {                              \
        ll temp = a[i];            \
        a[i] = a[n - i - 1];       \
        a[n - i - 1] = temp;       \
    }
#define fastio()                  \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define printclock cerr << "Time : " << 1000 * (long double)clock() / (long double)CLOCKS_PER_SEC << "ms\n";
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define frs(i, a, b, step) for (ll i = a; i < b; i += step)
#define frr(i, b, a) for (ll i = b - 1; i >= a; i--)
#define print(x) cout << x << endl;
#define pr2(a, b) cout << a << " " << b << endl;
#define pr3(a, b, c) cout << a << " " << b << " " << c << endl;
#define inp(k) \
    ll k;      \
    cin >> k;
#define in2(n, k) \
    ll n, k;      \
    cin >> n;     \
    cin >> k;
#define in3(a, b, c) \
    ll a, b, c;      \
    cin >> a >> b >> c;
#define pii pair<ll, ll>
#define pld pair<long double, long double>
#define sq(x) ((x) * (x))
#define cyes cout << "YES" << endl;
#define cno cout << "NO" << endl;
#define sp(a, b) \
    ll temp;     \
    temp = a;    \
    a = b;       \
    b = temp;
#define mod(a, b) (a % b + b) % b;
#define cbf cout.flush();
#define VAL 32
#define gout1(t, a) cout << "Case #" << t << ": " << a << endl;
#define gout2(t, a, b) cout << "Case #" << t << ": " << a << " " << b << endl;

ll gcd(ll a, ll b)
{
    if (a == 0 || b == 0)
    {
        return a + b;
    }
    return b ? gcd(b, a % b) : a;
}
ll power(ll x, ll y, ll p)
{
    ll res = 1;
    x %= p;
    while (y > 0)
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1;
        x = (x * x) % p;
    }
    return res;
}
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
ll searchll(ll val, vector<ll> &vec)
{
    fr(i, 0, vec.size())
    {
        if (vec[i] == val)
        {
            return i;
        }
    }
    return -1;
}
bool isPrime(ll n)
{
    int broken = 0;
    fr(i, 2, sqrt(n) + 1)
    {
        if (n % i == 0)
        {
            broken = 1;
            break;
        }
    }
    if (broken == 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}
bool isPerfectSquare(long double x)
{
    long double sr = sqrt(x);
    return ((sr - floor(sr)) == 0);
}

vector<bool> SieveOfEratosthenes(ll num)
{
    vector<bool> pno;
    pno.assign(num + 1, true);
    pno[0] = false;
    pno[1] = false;
    for (ll i = 2; i * i <= num; i++)
    {
        if (pno[i] == true)
        {
            for (ll j = i * 2; j <= num; j += i)
                pno[j] = false;
        }
    }
    return pno;
}

vector<ll> SieveOfEratosthenesExtended(ll num)
{
    vector<ll> pno(num + 1);
    fr(i, 0, num + 1) { pno[i] = i; }
    for (ll i = 2; i * i <= num; i++)
    {
        if (pno[i] == i)
        {
            for (ll j = i * 2; j <= num; j += i)
                if (pno[j] == j)
                    pno[j] = i;
        }
    }
    return pno;
}

vector<ll> PrimeFactorize_SOE(ll num)
{
    vector<ll> spf;
    spf = SieveOfEratosthenesExtended(num);
    set<ll> pf;
    while (num != 1)
    {
        pf.insert(spf[num]);
        num = num / spf[num];
    }
    vector<ll> v;
    for (auto it : pf)
    {
        v.pb(it);
    }
    return v;
}

ll calculateNcR(ll n, ll r)
{
    ll p = 1, k = 1;
    if (n - r < r)
        r = n - r;
    if (r != 0)
    {
        while (r)
        {
            p *= n;
            k *= r;
            ll m = gcd(p, k);
            p /= m;
            k /= m;
            n--;
            r--;
        }
    }
    else
        p = 1;
    return p;
}

ll stringToInt(string s)
{
    ll num = 0;
    fr(i, 0, s.length()) { num = num * 10 + (s[i] - '0'); }
    return num;
}

unordered_map<ll, ll> PrimeFactorize(ll n)
{
    unordered_map<ll, ll> prime_factor;
    for (ll i = 2; i * i < n; i++)
    {
        if (n % i == 0)
        {
            prime_factor.insert(mp(i, 1));
            n /= i;
            while (n % i == 0)
            {
                prime_factor[i]++;
                n /= i;
            }
        }
    }
    if (n > 1)
    {
        prime_factor.insert(mp(n, 1));
    }
    return prime_factor;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.length();
    unordered_map<int, int> mp;
    for (int i = 1; i < 10; i++)
    {
        mp[i] = i;
    }
    mp[0] = 10;
    int prev = 1;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        int num = s[i] - '0';
        // cout << mp[num] << " " << mp[prev] << " " << ans << endl;
        ans += abs(mp[num] - mp[prev]) + 1;

        prev = num;
    }
    cout << ans << endl;
}
signed main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    nl;
#ifndef ONLINE_JUDGE
    // printclock;
#endif

    return 0;
}