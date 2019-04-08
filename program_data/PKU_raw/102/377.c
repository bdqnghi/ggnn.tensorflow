main()
{
      int n,t=0,i,m,k=0;char a[100][9],e[9];float b[100],g[100],c[100],d;
      scanf("%d",&n);
     for(i=0;i<n;i++)
      {scanf("%s %f",a[i],&b[i]);
      }
     for(i=0;i<n;i++)
    { if(a[i][0]=='m'){c[t]=b[i];t++;}
       else {g[k]=b[i];k++;}}
    for(i=0;i<t;i++)
    {for(m=0;m<t-1;m++)
    {if(c[m+1]>c[m])
    {d=c[m];c[m]=c[m+1];c[m+1]=d;}}}
    for(i=t-1;i>0;i--)printf("%.2f ",c[i]);printf("%.2f",c[0]);
     for(i=0;i<k;i++)
    {for(m=0;m<k-1;m++)
    {if(g[m]<g[m+1])
    {d=g[m];g[m]=g[m+1];g[m+1]=d;}}}
    for(i=0;i<=k-1;i++)printf(" %.2f",g[i]);
       getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar(); getchar();
      }