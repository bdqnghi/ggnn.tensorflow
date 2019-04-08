main()
{
    int n,a,b,i,ncount;
    int they[10000]={0},me[10000]={0};
    scanf("%d",&n);
    for(i=0;;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a==0&&b==0)
            break;
        else
        {
            they[a]++;
            me[b]++;
        }
    }
    ncount=0;
    for(i=0;i<n;i++)
    {
        if(they[i]==0&&me[i]==n-1)
        {
            printf("%d\n",i);
            ncount++;
        }
    }
    if(ncount==0)
    printf("NOT FOUND");
    getchar();
    getchar();
}

