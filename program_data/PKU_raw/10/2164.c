main()
{
      int k,i,j,temp,max;
      int a[100],ans[100];
      scanf("%d",&k);
      for(i=1;i<=k;i++) scanf("%d",&a[i]);
      for(i=1;i<=k;i++) ans[i]=1;
      for(i=k-1;i>=1;i--)
      {
                         temp=1;
                         for(j=i+1;j<=k;j++)
                         {
                                            if(a[j]<=a[i])
                                            {
                                                          if(ans[j]+1>temp) temp=ans[j]+1;
                                            }
                         }
                         ans[i]=temp;
      }
      max=0;
      for(i=1;i<=k;i++)
      {
                       if(ans[i]>max) max=ans[i];
      }
      printf("%d",max);
      
}
