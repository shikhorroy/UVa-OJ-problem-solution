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
#define WRITE(f) freopen(f, "w", stdout)
#define mem(a,b) memset(a,b,sizeof(a))
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a * (b / gcd(a,b)))
//int dx[]={1,0,-1,0};
//int dy[]={0,1,0,-1}; //4 Direction
//int dx[]={1,1,0,-1,-1,-1,0,1};
//int dy[]={0,1,1,1,0,-1,-1,-1};//8 direction
//int dx[]={2,1,-1,-2,-2,-1,1,2};
//int dy[]={1,2,2,1,-1,-2,-2,-1};//Knight Direction
int cnum;
int X, Y, Z;
int A, B, C;
void takeInput()
{
    sf("%d %d %d", &A, &B, &C);
}
bool isTrue()
{
    if(X * Y * Z == B && X * X + Y * Y + Z * Z == C)
        return true;
    return false;
}
bool slolution()
{
    int maxX = max(100, A);
    for(X = -100; X <= maxX; X++)
    {
        for(Y = -100; Y <= maxX; Y++)
        {
            if(X != Y)
            {
                Z = A - (X + Y);
                if(X != Z && Y != Z)
                {
                    if(isTrue())
                        return true;
                }
            }
        }
    }
    return false;
}
int main()
{
//    READ("11565 - Silple Equations.txt");
//    double cl = clock();
    si(cnum);
    REP(cs, 1, cnum)
    {
        takeInput();
        if(slolution())
            pf("%d %d %d\n", X, Y, Z);
        else
            puts("No solution.");
    }
//    cl = clock() - cl;
//    pf("Total Execution Time = %lf seconds\n", cl / CLOCKS_PER_SEC);
    return 0;
}

