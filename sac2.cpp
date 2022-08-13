#include <bits/stdc++.h>
using namespace std;






void solve()
{
    int n;
    cout<<"Enter N = \n";
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++)
    {
      for(int j=0;j<n;j++)
        arr[i][j] = 0;
    }
    int i=0,j=0,cnt = 1,l=0,r=0,u=0,d=0;
    while(1)
    {
        if(arr[i][j]==0)
        arr[i][j] = cnt;
        if(l&&j>0&&arr[i][j-1]==0)
           j--;
        else if(r&&j<n-1&&arr[i][j+1]==0)
           j++;
        else if(u&&i>0&&arr[i-1][j]==0)
           i--;
        else if(d&&i<n-1&&arr[i+1][j]==0)
           i++;       
        else if(j<n-1&&arr[i][j+1]==0)
        {
          j++;
          r=1,l=0,u=0,d=0;
        }
        else if(i<n-1&&arr[i+1][j]==0)
        {
          i++;
          r=0,l=0,u=0,d=1;
        }
        else if(j>0&&arr[i][j-1]==0)
        {
          j--;
          r=0,l=1,u=0,d=0;
        }
        else
        {
          i--;
          r=0,l=0,u=1,d=0;
        }
        if(cnt == n*n)
          break;
        cnt++;
    }
  for(int i=0;i<n;i++)
  {
    for(int j=0;j<n;j++)
      cout<<arr[i][j]<<" ";
    cout<<"\n";
  }
}



int main()
{
    int t=1;
    while(t--)
    {
        solve();
    }
    return 0;
}
