main()
{
    int i,j,n;
    scanf("%d",&n);
    int *p=(int *)malloc(2*n*sizeof(int));
    for(i=0;i<n;i++)
    {
        p[i]=0;
    }
    for(i=1,j=1;i!=0||j!=0;)
    {
        scanf("%d %d",&i,&j);
        p[j]++;
    }
    for(i=0,j=0;i<n;i++)
    {
        if(p[i]==(n-1))
        {
            printf("%d\n",i);
            j=1;
        }
    }
    if(j!=1)
    {printf("NOT FOUND\n");}
}






