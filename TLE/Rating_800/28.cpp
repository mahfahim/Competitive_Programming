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
    vector<int> v(n);
    vector<int> ans1;
    vector<int> ans2;
    map<int,int> cnt;
    for(int i=0;i<n;i++)
    {
        cin >> v[i];
        cnt[v[i]]++;
    }
    
    if(cnt.size() <= 1)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for(auto &[key,val]:cnt)
        {
            ans1.push_back(key);
            cnt[key]--;
        }
        sort(ans1.begin(),ans1.end(),greater<int>());
        for(auto x:ans1)
        {
            cout << x << " ";
        }

        for(auto &[key,val]:cnt)
        {
            while(val--){
                ans2.push_back(key);
                
            }
        }
        sort(ans2.begin(),ans2.end(),greater<int>());
        for(auto x:ans2)
        {
            cout << x << " ";
        }
        cout << endl;
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