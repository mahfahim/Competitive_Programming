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
const long long MM = 998244353;
#define ll long long
#define ldb long double
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void solve(void)
{
    int n;
    cin >> n;
    vector<int> p(n);
    vector<int> q(n);
    vector<ll> r;
    vector<ll> max_p(n),max_q(n);
    vector<ll> pow2(n);
    
    for(int i=0;i<n;i++) {
        cin >> p[i];
    }
    for(int i=0;i<n;i++){
        cin >> q[i];
    }
    
    pow2[0] = 1;
    for(int i=1;i<n;i++){
        pow2[i] = (pow2[i-1]*2) % MM;
    }

    for(int i=0;i<n;i++){
        if(i == 0){
            max_p[i] = pow2[p[i]];
            max_q[i] = pow2[q[i]];
        }else {
            max_p[i] = max(max_p[i-1],pow2[p[i]]);
            max_q[i] = max(max_q[i-1],pow2[p[i]]);
        }
    }

    vector<ll> presum(n);
    for(int i=0;i<n;i++){
        if(i==0){
            presum[i] = (pow2[p[i]] + pow2[q[i]]) % MM;
        } else {
            ll cursum = ( (pow2[p[i]] + pow2[q[i]]) ) % MM;
            presum[i] = max(presum[i-1],cursum);
        }
    }

    for(int i=0;i<n;i++){
        ll max_val = 0;
        int start = max(0,i-100);
        for(int j=start; j<=1;++j){
            
        }
    }

    for(int i=0;i<n;i++){
        ll mx = 0;
        for(int j=0;j<=i;j++){
            ll sum = pow(2,p[j]) + pow(2,q[i-j]);
            sum = sum % MM;
            mx = max(mx,sum);
        }
        r.push_back(mx);
    }

    for(int i=0;i<r.size();i++){
        cout << r[i] << " ";
    }
    cout << endl;
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