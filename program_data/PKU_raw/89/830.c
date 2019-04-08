main()
{
    int n;
    int i,j,h;
    int t=0;
    int a[100000];
    int b[100000];
    int c[100000]={0};
    int d[100000]={0};
    scanf("%d",&n);
    scanf("%d %d",&a[0],&b[0]);
    i=0;
    while(a[i]!=0||b[i]!=0)
    {
        i++;
        h=i;
        scanf("%d %d",&a[i],&b[i]);
    }
    for(j=0;j<h;j++)
    {
        c[a[j]]++;
    }
    for(j=0;j<h;j++)
    {
        d[b[j]]++;
    }
    for(j=0;j<n;j++)
    {
        if(c[j]==0&&d[j]>=n-1)
        {
            printf("%d",j);
            t=1;
        }
    }
    if(t==0)
    printf("NOT FOUND");
}
