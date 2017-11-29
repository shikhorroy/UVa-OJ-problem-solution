#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
#define PI acos(-1.0)
typedef long long ll;
typedef unsigned long long llu;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef vector<pii> vii;
typedef map<string, int> msi;
#define REP(i, b, e)\
    for(int i = int(b); i <= int(e); i++)
#define TRvi(c, it)\
    for(vi::iterator it = (c).begin(); it != (c).end(); ++it )
#define TRvii(c, it)\
    for(vii::iterator it = (c).begin(); it != (c).end(); ++it )
#define sf scanf
#define pf printf
#define si(x) sf("%d",&x)
#define in(x) cin>>x
#define out(x) cout<<(x)
#define ln length()
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define READ(f) freopen(f, "r", stdin)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
int x, y;
int extended_euclid(int a, int b)
{
    int x0 = 1, y0 = 0, mod, div;
    int x1 = 0, y1 = 1;

    while(b != 0)
    {
        div = a / b; mod = a % b;
        a = b; b = mod;
        x = x0 - x1 * div; y = y0 - y1 * div;
        x0 = x1; y0 = y1;
        x1 = x; y1 = y;
    }
    x = x0, y = y0;
    return a;
}
int main()
{
//    READ("in.txt");
    int a, b;
    while(sf("%d %d", &a, &b) != EOF)
    {
        int gcd = extended_euclid(a, b);
        pf("%d %d %d\n", x, y, gcd);
    }
    return 0;
}
