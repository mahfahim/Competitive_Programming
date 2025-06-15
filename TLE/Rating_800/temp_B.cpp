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
    int n,k;
    cin >> n >> k;
    string s;
    cin >> s;
    map<char,int> cnt;
    for(int i=0; i<(n/2); i++)
    {
        if(s[i]==s[n-i-1]){
            cnt[s[i]]++;
        }
    }
    if((cnt['0']+cnt['1']) == k){
        cout << "YES" << endl;

    }else{
        
                if(cnt['0'] >= cnt['1']){
                for(int i=1;i<=k;i++){
                    if(i%2!=0){
                        cnt['0']--;
                    }else{
                        cnt['1']--;
                    }
                }
            }
            else{
                for(int i=1;i<=k;i++){
                    if(i%2!=0){
                        cnt['1']--;
                    }else{
                        cnt['0']--;
                    }
                }
            }
            if(cnt['0'] >= 0  && cnt['1'] >= 0  && cnt['0']==cnt['1']){
                    cout << "YES" << endl;
                
            }else{
                cout << "NO" << endl; 
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