main()
{
    int n,a,b,i,icount;
    int know[10000],known[10000];
    scanf("%d",&n);
    for(i=0;;i++)
    {
        scanf("%d",&a);
        scanf("%d",&b);
        if(a==0&&b==0)
            break;
        else
        {
            know[a]++;
            known[b]++;
        }
    }
    icount=0;
    for(i=0;i<n;i++)
    {
        if(know[i]==0&&known[i]==n-1)
        {
            printf("%d\n",i);
            icount++;
        }
    }
    if(icount==0)
    printf("NOT FOUND");
    getchar();
    getchar();
}
