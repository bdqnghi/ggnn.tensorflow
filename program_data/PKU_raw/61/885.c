main()
{
      int n,a[1000];
      a[0]=1;a[1]=1;
      scanf("%d",&n);
      int s[n];
      for(int i=0;i<n;i++)
      {
          scanf("%d",&s[i]);
      if(s[i]==1||s[i]==2)printf("%d",a[1]);
       else
      {for(int j=2;j<s[i];j++)
      {a[j]=a[j-1]+a[j-2];
      if(j==s[i]-1) printf("%d\n",a[j]);}}
       }}

