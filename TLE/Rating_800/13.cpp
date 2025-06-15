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
    vector<ll> v(n),b,c;
    
    for(int i=0;i<n;i++){
        cin >> v[i];
        
    } 
    sort(v.begin(),v.end());
    b.push_back(v[0]);
    bool flag = true;
    for(int i=1;i<n;i++){
       if(flag && v[i]==v[i-1]){
         b.push_back(v[i]);
       }else{
         flag = false;
         c.push_back(v[i]);
       }
    }
    if(b.size() >= 1 && c.size() >= 1){
       cout << b.size() << " " << c.size() << endl;
       for(int i=0;i< b.size();i++){
         cout << b[i] << " ";
       }
       cout << endl;
       for(int i=0;i<c.size();i++){
         cout << c[i] << " ";
       }
       cout << endl;
    }else{
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