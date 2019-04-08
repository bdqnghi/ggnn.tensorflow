
main()
{
      int k,n_max,i;
      int a[25];
      scanf("%d",&k);
      int n[k];
      for(i=0;i<k;i++)
      {
             scanf("%d",&a[i]);
             n[i]=1;
      }
      for(int j=k-2;j>=0;j--)
      {
            for(int t=j+1;t<k;t++)
            {
                   if(a[t]<=a[j]&&n[j]<=n[t])
                         n[j]=n[t]+1;
            }              
      }
      n_max=0;
      for(int p=0;p<k;p++)
      {
             if(n[p]>n_max)
                   n_max=n[p];
      }      
      printf("%d\n",n_max);
      
}  