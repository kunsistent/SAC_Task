#include <bits/stdc++.h>
using namespace std;



bool isArmstrong(int i)
{
    int num = i,n=0;
    while(num!=0)
    {
       num/=10;
       n++;
    }
    num = i;
    int sum=0;
    while(num!=0)
    {
        int rem = num % 10;
        int digit = 1;
        num/=10;
        for(int j=0;j<n;j++)
            digit*=rem;
        sum+=digit;
    }
    if(i == sum)
        return true;
    else
        return false;
}




void solve()
{
      int n;
      cout<<"Enter N = ";
      cin>>n;
      cout<<"\nAll armstrong numbers between 1 and n are as follows: \n";
      for(int i=1;i<=n;i++)
      {
        if(isArmstrong(i))
            cout<<i<<"\n";
      }
}



signed main()
{
        #ifndef ONLINE_JUDGE
         freopen("debug.txt", "w", stderr);
         freopen("input.txt","r",stdin);
         freopen("output.txt","w",stdout);
        #endif
    int t=1;
    //cin>>t;
    int i=1;
    while(t--)
    {
        //cout<<"Case #"<<i<<": ";
        solve();
        //i++;
    }
    return 0;
}