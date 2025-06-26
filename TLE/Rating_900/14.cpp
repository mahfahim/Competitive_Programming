//********* Bismillahir Rahmanir Rahim *********

// mahfahim51

#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define pb push_back
#define nl cout<<"\n"
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define f(a,b,c) for(int a=b;a<c;a++)
#define cin(vec,n) f(i,0,n){cin >> vec[i];}
#define endl "\n"
const int NN = 2e5+10;
const int MM = 1e9+7;
#define ll long long
#define ldb long double
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(void)
{
    ll n;
    cin >> n;
    ll mx=0,mn=0,four1=0,six1=0,four2=0,six2=0;
    if(n%2==0 && n>=4)
    {
        four1 = n/4;
        if(n%4==2)
        {
          four1--;
          six1 = 1;
        }
        mx = four1 + six1;

        
        six2 = four1/3;
        six2 *=2;
        six2 += six1;
        
        if(four1 % 3 == 0)
        {
            four2 = 0;
        }
        else if(four1 % 3 == 1)
        {
            four2 = 1;   
        }
        else if(four1 % 3 == 2)
        {
            four2 = 2;
        }
        mn = six2 + four2;

        cout << mn << " " << mx << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
    //********* Alhamdulillah *********
}