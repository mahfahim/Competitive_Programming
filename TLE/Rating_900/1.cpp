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
vector<int> p = {1,-1,1,-1} , q = {1,-1,-1,1};
void solve(void)
{
    int a,b,ki,kj,qi,qj;

    cin >> a >> b;
    cin >> ki >> kj;
    cin >> qi >> qj;

    set<pair<int,int>> ks,qs;
    
    for(int i=0;i<4;i++)
    {
        ks.insert({ki+p[i]*a , kj+q[i]*b});
        ks.insert({ki+p[i]*b , kj+q[i]*a});
        qs.insert({qi+p[i]*a , qj+q[i]*b});
        qs.insert({qi+p[i]*b , qj+q[i]*a});

    }
    
    int ans = 0;
    for(auto x:ks)
    {
        if(qs.find(x) != qs.end())
        {
            ans++;
        }
    }

    cout << ans << endl;




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