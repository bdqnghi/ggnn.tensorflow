int main()
{
  int ans[10000]={0};
  int mid[10000]={0};
  int n,i,temp,j;
  cin>>n;
  mid[1]=1;mid[0]=1;
  if (n==0) {ans[1]=1;ans[0]=1;}
  if (n>=1)
  {for (j=1;j<=n;j++)
    {
      for (i=1;i<=ans[0];i++)
        ans[i]=0;
      for (i=1;i<=mid[0];i++)
        {
          temp=mid[i]*2;
          ans[i]=ans[i]+temp % 10;
          ans[i+1]=temp / 10;                    
        }
      ans[0]=mid[0];
      if (ans[mid[0]+1]>0) ans[0]=mid[0]+1;
      mid[0]=ans[0];
      for (i=1;i<=ans[0];i++)
         mid[i]=ans[i];          
  }}    
  for (i=ans[0];i>=1;i--)
    cout<<ans[i];
  
  return 0;
}
