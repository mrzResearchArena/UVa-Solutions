Need to Know :
__________________________________________________________
frosh (fresher) = newly admitted student in University.
__________________________________________________________



/// C ++ :
#include <iostream>
#include <algorithm>
#include <functional>
#include <cstring>
/// C :
#include <cstdio>
#include <cstdlib>
#include <cmath>
/// STL C ++ :
#include <iterator>
#include <vector>
#include <map>
#include <set>
#include <list>
#include <stack>
#include <queue>

using namespace std;

/// Template :
template <class T> inline T GCD(T a, T b) { if(b == 0) return a; return GCD(b, a%b); }
template <class T> inline T LCM(T a, T b) { return ( a/GCD(a, b) ) * b; }
template <class T> inline T power(T b, T p) { T n = 1; for(int i=1; i<=p; i++) { n = n * b; } return n; }
template <class T> inline void Oooo(T value) { cout << value << "\n"; }

/// Predefined :
#define ll long long
#define dd double
#define Pi acos(-1.0)   ///  #define Pi 2*acos(0.0)  ///  #define Pi 4*atan(1.0)
#define ESPN 1e-10
#define FF first
#define SS second
#define pb push_back
#define FASTER ios_base::sync_with_stdio(0); cin.tie(0)
#define Oz printf
#define CASE(C) cout << "Case " << ": " << C << "\n";  /// Light OJ
#define sq(x) x*x
#define Read freopen("in.txt", "r", stdin)
#define Write freopen("out.txt", "w", stdout)


int main(int argc, char **argv)
{
    //Read;
    vector<int> v;
    ll sum = 0;

    int T; cin >> T;
    while(T --)
    {
        int i=1;
        int mark;
        int n; cin >> n;
        while(i<=n)
        {
            cin >> mark;
            v.pb(mark);
            sum = sum + mark;
            i ++;
        }

        double average = (double) sum / n;
        int j=0;
        int C = 0;
        while(j<n)
        {
            if(v[j] > average) C ++;
            j ++;
        }
        double Reality = (double) C/n;
        Oz("%0.3lf%\n", Reality * 100);
        sum = 0;
        v.clear( );
    }
    return 0;
}

