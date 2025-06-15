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
#define f(a,b,c) for(ll a=b;a<c;a++)
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
    vector<ll> v(n);
    map<ll,ll> cnt;

    for(ll i=0;i<n;i++){
      cin >> v[i];  
      cnt[v[i]]++;
   
    } 

    bool flag = false;
    ll sz = cnt.size();
   
    if(sz == 1) flag = true;
    else if(sz == 2){
        
        int fst = cnt.begin()->second;
        int lst = cnt.rbegin()->second;

        if(fst == lst) flag = true;
        if(abs(fst-lst)==1) flag =true;
                
        
    }

    if(flag) cout << "Yes" << endl;
    else cout << "No" << endl;
     
}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t=1;
    cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
    //********* Alhamdulillah *********
}