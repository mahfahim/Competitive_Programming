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
    string s,t;
    vector<char> ss;
    cin >> s >> t;
    reverse(s.begin(),s.end());
    reverse(t.begin(),t.end());
    
    int count = 0;
    
    map<char,int> rep;
    map<char,int> trep;
    for(int i=0;i<t.size();i++)
    {
        trep[t[i]]++;      
    }
    for(int i=0;i<s.size();i++)
    {
        rep[s[i]]++;
        if(rep[s[i]] <= trep[s[i]])
        {
            ss.push_back(s[i]);
        }
    }
    
    int i=0,j=0;
    while(j<ss.size())
    {
        if(t[i] == ss[j])
        {
        count++;
        i++;
        
        }
        j++;
        if(i == t.size())
        {
            break;
        }
        
    }
        
    
    if(count == t.size())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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