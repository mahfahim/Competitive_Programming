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
    bool flag = true;
    vector<int> v;

    for(int i=2;i<=n;i=i+2)
    {
        v.push_back(i); 
    }


    for(int i=1;i<=n;i=i+2) 
    {
        v.push_back(i);
    }


    int temp = v[0];

    for(int i=1;i<v.size();i++)
    {
        int save = abs(temp-v[i]);
        if(save == 1)
        {
            flag = false;
        }
        temp=v[i];
    }
    

    if(flag)
    {
        for(int u:v)
        {
            cout << u << " ";
        }
        cout << endl;

    }
    else
    {
        cout << "NO SOLUTION" << endl;
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