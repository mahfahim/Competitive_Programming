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
    int n,k,x;
    cin >> n >> k >> x;


    if(x != 1)
    {
        cout << "YES" << endl;
        cout << n << endl;
        for(int i=1; i<=n; i++)
       {
         cout << "1 ";
       }
       cout << endl;
    }
    else if(x == 1)
    {
       if(k==1)
       {
          cout << "NO" << endl;
        
       }
       else if(k==2)
       {
          if(n%2 == 0){
            cout << "YES" << endl;
            cout << n/2 << endl;
            for(int i=1; i<=(n/2); i++){
                cout << "2 ";
            }
            cout << endl;
          }else{
            cout << "NO" << endl;
          }
       }
       else if(k>=3)
       {
            if(n%2 == 0){
                cout << "YES" << endl;
                cout << n/2 << endl;
                for(int i=1; i<=(n/2); i++){
                    cout << "2 ";
                }
                cout << endl;
            }else{
                cout << "YES" << endl;
                int nn = n;
                nn -= 3;
                cout << 1 + nn/2 << endl;
                cout << "3 ";
                while(nn){
                    cout << "2 ";
                    nn -= 2;
                }
                cout << endl;
            }
       }

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