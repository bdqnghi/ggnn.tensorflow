main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    a[i]=0;
    for(int j=0;;j++)
    {
        int p,q;
        scanf("%d %d",&p,&q);
        if((p==0)&&(q==0))
        break;
        else
        {
            a[q]++;
            a[p]--;
        }
    }
    int m;
    for(m=0;m<n;m++)
    {
        if(a[m]==n-1)
        {
        printf("%d",m);
        break;
        }
    }
    if(m==n)
    printf("NOT FOUND");
}
