int main()
{
    int m,k,n,a[300],i,j,h;
    scanf("%d%d",&n,&m);
    do
    {
    for(j=1;j<=n;j++)
        a[j]=j;
        k=1;
        for(i=1;i<=n-1;i++)
        {
            k=k+m-1;
            while(k>(n-i+1))
            k=k-n+i-1;
            if(k==(n-i+1))
                a[k]=a[k+1];
            else
            {
            for(h=k;h<=n-i;h++)
            a[h]=a[h+1];
            }
        }
    printf("%d\n",a[1]);
        scanf("%d%d",&n,&m);
    }
    while(n!=0);
    return 0;
}