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
    ll s;
    cin >> n >> s ;
    int count =0;
    int nn = n;
    
    while(nn--)
    {
        int a,b,x,y;
        cin >> a >> b >> x >> y;
        if(a==-1 && b==-1)
        {
           if(x==y) count++;
        }
        else if(a==1 && b==-1)
        {
           if(y==(s-x)) count++;
        }
        else if(a==1 && b==1)
        {
           if((s-x) == (s-y)) count++;
         
        }
        else if(a==-1 && b==1)
        {
           if(x == (s-y)) count++;
        }
    }
    cout << count << endl;
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