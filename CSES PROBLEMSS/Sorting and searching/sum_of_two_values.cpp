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
    ll n,x;
    cin >> n >> x;
    vector<ll> v(n);
    // map<ll,int> mp;
    for(int i=0;i<n;i++){
      cin >> v[i];  
      // mp[v[i]]=i+1;
    } 

    sort(v.begin(),v.end());
    int l=0;
    int r=v.size()-1;
    ll ans1;
    ll ans2;
    bool flag = true;
    while(l<r){

      ll sum = v[l] + v[r];
      if(sum == x){
        ans1 = v[l];
        ans2 = v[r];
        flag = false;
        break;
      }
      else if(sum > x ){
        r--;
      }
      else if(sum < x){
        l++;
      }

    }
    
    if(flag){
      cout << "IMPOSSIBLE" << endl;
    }else{
      for(int i=0;)
      cout << mp[ans1] << " " << mp[ans2] << endl; 
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