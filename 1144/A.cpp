
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
#define exit(x)     cout<<x<<"\n",return
#define mem(a,val)  memset(a,val,sizeof(a))
#define fr(i,a,n)   for(ll i=a;i<n;i++)
#define frr(i,a,n)  for(ll i=n-1;i>=a;i--)


const ll N   =  500005;
const ll mod = 1e9 + 7;

using namespace std;


void solve()
{
ll T=1;
cin>>T;
while(T--)
  {
  string s;
  ll n,m,k,x=0,y=0,c=0,q,ans=0;
  cin>>s;
  sort(s.begin(), s.end());
  for (int i = 0; i < s.length()-1; ++i)
  {
     if(s[i+1]-s[i]==1)
      continue;
    else
    {
      c("No");
      c=1;
      break;
    }
  }
  if(c==0)
    c("Yes");


 }
}

signed main(){
      #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);
      #endif
      ios_base::sync_with_stdio(false);   
      cin.tie(NULL);
      solve();
      return 0;
    }