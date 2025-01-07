//********* Bismillahir Rahmanir Rahim *********
#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define endl "\n"
#define ll long long
#define ldb long double
#define pb push_back
#define all(x) x.begin(), x.end()
#define allr(x) x.rbegin(), x.rend()
#define f(a,b,c) for(int a=b;a<c;a++)
#define cin(vec,n) f(i,0,n){cin >> vec[i];}
const int NN = 2e5+10;
const int MM = 1e9+7;
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
       
        vector<int> ans(n+3,0);
        int cnt = 1;
        for(int i=k;i<=n;i=i+k)
        {   
            ans[i]=cnt;
            cnt++;  
        }
        for(int i=1;i<=n;i++)
        {
            if(ans[i]==0)
            {
              ans[i]=cnt;
              cnt++;
            }
        }
        for(int i=1;i<=n;i++)
        {
            cout << ans[i] << " ";
        }
            cout << endl;
        
    }
     
    return 0;
    //********* Alhamdulillah *********
}