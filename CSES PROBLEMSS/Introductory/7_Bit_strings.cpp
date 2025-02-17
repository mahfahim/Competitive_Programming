#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
const int NN = 2e5+10;
const int MM = 1e9+7;
#define ll long long
#define ldb long double
template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
//template <typename T> using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

int binExpRecur(int a,int b)
{
     if(b==0) return 1;
     int res = binExpRecur(a,b/2);
     if(b&1)
       return (a*(res*1LL*res)%MM)%MM;
     else
       return (res*1LL*res)%MM;
}
int  main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin >> n;
    cout << binExpRecur(2,n) << endl;
  
    return 0;
    //********* Alhamdulillah *********
}
