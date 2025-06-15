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

    int minus = 0;
    int plus = 0;

    for(int i=0;i<n;i++){
        cin >> v[i];
        if(v[i] == 1) plus++;
        if(v[i] == -1) minus++;
    }

    if(minus <= plus ){

        if(minus % 2 == 0){
            cout << 0 << endl;
        }else{
            cout << 1 << endl;
        }

    }else{
        
        int mid = plus + minus;
        
        if(mid % 2 == 0) {
            mid /= 2;
            int change = minus - mid;
            minus -= change;
            if(minus % 2 != 0){
                change++;
            }
            cout << change << endl;
        }else{
            mid /= 2;
            mid++;
            int change = mid - plus;
            minus -= change;
            if(minus % 2 != 0){
                change++;
            }
            cout << change << endl;
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