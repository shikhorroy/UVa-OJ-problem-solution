/******************Joy Krishna****************
*    Online Judge:
*    Problem Name:
*Problem Category:
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
typedef vector<pii > vpii;
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
bool is_valid(int a, int b)
{
    if(int(log10(a)) == 3 && int(log10(b)) == 3) return false;

    bool flag[10] = {false};

    if(int(log10(a)) == 3) flag[0] = true;
    while(a)
    {
        if(flag[a % 10]) return false;
        flag[a % 10] = true;
        a = a / 10;
    }

    while(b)
    {
        if(flag[b % 10]) return false;
        flag[b % 10] = true;
        b  = b / 10;
    }
    return true;
}
int main()
{
//    READ("in.in");
//    WRITE("out.out");
//    double cl = clock();
    int n;
    bool newLine = false;
    while(sf("%d", &n), n)
    {
        bool flag = true;
        if(newLine) pf("\n"); newLine = true;
        REP(a, 1234, 98765)
        {
            int b = n * a;
            if(is_valid(a, b)){
                pf("%05d / %05d = %d\n", b, a, n);
                flag = false;
            }
        }
        if(flag) pf("There are no solutions for %d.\n", n);
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}
