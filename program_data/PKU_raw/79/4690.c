main()
{
      short a[310];
      int n,m,i,j,k,st;
      
      a[0]=1;
      do
      {
            scanf("%d %d",&n,&m);
            if (0==n && 0==m) break;
            for (i=1;i<=n;i++) a[i]=0;
            st=0;
            for (i=1;i<=n;i++)
            {
                for (j=1;j<=m;j++)
                {
                    st++;
                    if (st==n+1) st=1;
                    while (a[st]==1)
                    {
                        st++;
                        if (n+1==st) st=1;                              
                    }
                }
                a[st]=1;
                if (i==n) printf("%d\n",st);            
            }
      }while (0!=n || 0!=m);
      return 0;
}
