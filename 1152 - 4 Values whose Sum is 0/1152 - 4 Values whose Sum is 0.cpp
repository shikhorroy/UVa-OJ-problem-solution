/******************Joy Krishna****************
*    Online Judge: UVa OJ
*    Problem Name: 1152 - 4 Values whose Sum is 0
*Problem Category: Meet in the middle technique
*Coder: Shikhor Roy(CSE - 2012, HSTU).
*********************************************/
#include<cstdio>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<cstring>
#include<climits>
#include<ctime>

#include<iostream>
#include<iomanip>
#include<vector>
#include<list>
#include<stack>
#include<queue>
#include<map>
#include<set>
#include<string>
#include<utility>
#include<sstream>
#include<bitset>
#include<algorithm>
using namespace std;

#define EPS 1E-4
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
#define out(x) cout<< (x) << endl
#define out2(x, y) cout<< (x) << " " << (y) << endl
#define out3(x, y, z) cout<< (x) << " " << (y) << " " << (z) << endl
#define ln length()
#define sz size()
#define clr clear()
#define pb push_back
#define mp make_pair
#define x first
#define y second
#define READ(f) freopen(f, "r", stdin)
#define WRITE(f) freopen(f, "w", stdout)
#define TEST int cnum; sf("%d", &cnum); REP(cs, 1, cnum)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
int main()
{
//    READ("in.in");
//    double cl = clock();
    bool flag = false;
    TEST
    {
        int n; sf("%d", &n);
        int loop = n - 1, a, b, c, d;
        vi A, B, C, D, LHS, RHS;
        REP(i, 0, loop)
        {
            sf("%d %d %d %d", &a, &b, &c, &d);
            A.pb(a); B.pb(b);
            C.pb(c); D.pb(d);
        }
        REP(i, 0, loop)
        {
            REP(j, 0, loop)
            {
                LHS.pb(A[i] + B[j]);
                RHS.pb(C[i] + D[j]);
            }
        }
        sort(LHS.begin(), LHS.end());
        ll ans = 0;
        loop = LHS.sz - 1;
        REP(i, 0, loop)
        {
            /// upper_bound() and lower_bound() takes too more time than equal_range() :o
//            int calc = upper_bound(LHS.begin(), LHS.end(), (RHS[i] * -1)) -
//                       lower_bound(LHS.begin(), LHS.end(), (RHS[i] * -1));
//            ans += calc;
            pair<vi :: iterator, vi :: iterator> range = equal_range(LHS.begin(), LHS.end(), (RHS[i] * -1));
            ans += range.second - range.first;
        }
        if(flag) puts(""); flag = true;
        pf("%lld\n", ans);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
