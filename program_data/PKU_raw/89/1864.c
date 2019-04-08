main()
{
    int n,i,j,N=0;
    scanf("%d\n",&n);
    int p1[100000]={1},p2[100000]={1};
    for(i=0;;i++)
    {
        scanf("%d %d",&p1[i],&p2[i]);
        if((p1[i]==0)&&(p2[i]==0)) break;
    }
    int t,s,num=0;
    for(t=0;t<n;t++)
    {
        for(j=0,s=0;j<i;j++)
        {
            if(p1[j]==t)break;
            if(p2[j]==t)s++;
        }
        if(j==i&&s==n-1)
        {
            printf("%d",t);
            num=1;
        }
    }
    if(num==0)printf("NOT FOUND");
}
