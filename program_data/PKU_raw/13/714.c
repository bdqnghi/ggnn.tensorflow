main()
{
      int n;
      scanf("%d",&n);
      int s[20000],y[20000];
      int i,j,k;
      for(i=0;i<n;i++)
      {
                      scanf("%d",&s[i]);
      }
      k=0;
      for(i=n-1;i>0;i--)
      {
                      for(j=i-1;j>=0;j--)
                      {
                                         if(s[i]==s[j])
                                                break;
                      }
                      if(j==-1)
                      {
                               y[k]=s[i];
                               k++;
                      }
      }
      printf("%d",s[0]);
      for(i=k-1;i>=0;i--)
            printf(" %d",y[i]);
}
