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
    int n;
    cin >> n;
    ll sum = 1LL * n * (n+1) / 2;
    if(sum & 1){
        cout << "NO" << endl;
    }else{
        
        sum /= 2;
        vector<int> s1,s2;
        for(int i=n;i>=1;i--)
        {
            if(sum >= i)
            {
                sum -= i;
                s1.push_back(i);
            }else{
                s2.push_back(i);
            }
        }
        cout << "YES" << endl;
        cout << s1.size() << endl;
        for(int u:s1) cout << u << " ";
        cout << endl;
        cout << s2.size() << endl;
        for(int u:s2) cout << u << " ";
        cout << endl;
        
    }

}
signed main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t=1;
    //cin >> t;
    while(t--)
    {
       solve();
    }
    return 0;
    //********* Alhamdulillah *********
}