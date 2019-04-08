main()
 {  long int a[100000],b[100000],c[100000],d,e,i,m,n,p,q,f[100000];
    scanf("%d",&n);
    for(i=0;i<100000;i++)
    {scanf("%d %d",&a[i],&b[i]);
    if(a[i]==0&&b[i]==0)
    break;d=i;}  
    for(m=0;m<=n-1;m++)
    {c[m]=0;}
    for(m=0;m<=n-1;m++) 
    {for(i=0;i<=d;i++)
    {if(b[i]==m){c[m]++;}}}
    for(m=0;m<=n-1;m++) 
    {f[m]=c[m];}
    for(m=0;m<=n-2;m++) 
    {if(f[m]>=f[m+1])f[m+1]=f[m];}
    
    for(m=0;m<=n-1;m++) 
    {if(c[m]==f[n-1])
     {if(c[m]>=n-1)
    printf("%d",m);
    else printf("NOT FOUND");}}
    getchar();getchar();getchar();getchar();
}
    
    