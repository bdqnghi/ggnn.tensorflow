main()
{
    int s,j,n,tao,m,x=0;
    for(;;)
    {
        int a[305]={0};
        scanf("%d %d",&n,&m);
        if(n==0||m==0) break;
        
        for(s=1,j=0,tao=0;tao!=n-1;s++)
        {
              if(s==n+1) s=1;
              if(a[s]==1) continue;
              j++;
              if(j==m){tao++;j=0;a[s]=1;}
        }
        for(s=1;s<=n;s++)
        {
           if(a[s]==0)
           {printf("%d\n",s);break;}
        }
    }
}