int main()
{
    int a[100],b[100],c[100],d[100],e[100],f[100],m[100],n,i; n=0;
    do
    {
    scanf("%d%d%d%d%d%d",&a[n],&b[n],&c[n],&d[n],&e[n],&f[n]);
    n++;
    }
    while(a[n-1]!=0);
    
    for(i=0;i<n-1;i++)
    {
    m[i]=3600*(d[i]-a[i]+12)+60*(e[i]-b[i])+f[i]-c[i];
   
    printf("%d\n",m[i]);
    }
    return 0;
}


