
#include<bits/stdc++.h>
#define ll          long long
#define pb          push_back
#define eb          emplace_back
#define c(P)        cout<<P<<"\n"
#define pii         pair<ll,ll>
#define mi          map<ll,ll>
#define mii         map<pii,ll>
#define F           first
#define S           second
#define mp(x,y)     make_pair(x,y) 
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,a,n)   for(ll i=a;i<n;i++)
#define frr(i,a,n)  for(ll i=n-1;i>=a;i--)


const ll N   =  500005;
const ll mod = 1e9 + 7;

using namespace std;


void solve()
{
// string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>n;
  ll a[n];
  ll pos[n];
  std::vector<pii> v;
  for (ll i = 0; i < n; ++i)
  {
  cin>>a[i];
  a[i]--;
  pos[a[i]] = i;
  }


 for (ll i = 0; i < n; ++i)
 {
     if(a[i]==i)
      continue;

    if(abs(pos[i]-i)>=n/2)
    {

       pos[a[i]] = pos[i];
       pos[i]    = i; 
      //  c(pos[a[i]]);
       v.pb({pos[a[i]],pos[i]});
       swap(a[i],a[pos[a[i]]]);
    }
    else if(n-1 -pos[i]>=n/2)
    {  
        v.pb({n-1,pos[i]});
        if(n-1-i >=n/2)
        {
          v.pb({n-1,i});
          v.pb({n-1,pos[i]});
        }
        else
        {
        v.pb({0,n-1});
        v.pb({0,i});
        v.pb({0,n-1});
        v.pb({n-1,pos[i]});
        }
      

         pos[a[i]] = pos[i];
         pos[i]    = i;
        swap(a[i],a[pos[a[i]]]);
    }
    
      else 
    {
        v.pb({0,pos[i]});
        if(i>=n/2)
        {
           v.pb({0,i});
           v.pb({0,pos[i]});

        }
        else
        {
        v.pb({0,n-1});
        v.pb({i,n-1});
        v.pb({0,n-1});
        v.pb({0,pos[i]});
        }
         pos[a[i]] = pos[i];
         pos[i]    = i;
        swap(a[i],a[pos[a[i]]]);
        
    }
 }

 c(v.size());
for (int i = 0; i < v.size(); ++i)
{
  cout<<v[i].F+1<<" "<<v[i].S+1<<"\n";
}
}

signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      ll T=1;
      //cin>>T;
      while(T--)
      {
      solve();
      }
      return 0;
    }