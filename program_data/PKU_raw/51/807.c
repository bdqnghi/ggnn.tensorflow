main()
{
      char c[505];
      int a[505]={0};
      int i,j,k,n,m,max,fu,ji;
      scanf("%d",&n);
      scanf("%s",c); m=strlen(c)-1;
      for(i=0;i<=m-n;i++)
      {
           a[i]=1;
           for(j=i+1;j<=m-n+1;j++)
           {
                  for(k=0;k<=n-1;k++)
                  {
                       if(c[i+k]!=c[j+k])
                       break;
                  }
                  if(k==n)
                  a[i]++;
           }
      }
      for(max=1,i=0;i<=m-n;i++)
      {
           if(a[i]>max)
           max=a[i]; 
      }
      if(max==1) printf("NO\n");
      else
      {
         printf("%d\n",max);
         for(i=0;i<=m-n;i++)
         {
           if(a[i]==max) 
           {
            for(k=0;k<=n-1;k++)
            printf("%c",c[i+k]);
            printf("\n");
           }
         } 
      }    
}     
           