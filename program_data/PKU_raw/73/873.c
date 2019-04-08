int pfc(const void *p1, const void *p2)
{
    return *(int *)p2-*(int *)p1;
}

main()
{
    int a[5][5];
    int i,j,ri,rj,k=0;
    int ai[5]={0},aj[5]={0};
    for(i=0;i<5;i++)
        for(j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            ai[j]=0;
            aj[j]=0;
        }
        for(j=0;j<5;j++)
            ai[j]=a[i][j];
        qsort(ai,5,sizeof(int),pfc);
        for(j=0;j<5;j++)
            if(a[i][j]==ai[0])
                {ri=i;rj=j;}
        for(j=0;j<5;j++)
            aj[j]=a[j][rj];
        qsort(aj,5,sizeof(int),pfc);
        if(a[ri][rj]==aj[4])
        {
            printf("%d %d %d",ri+1,rj+1,a[ri][rj]);
            k=1;
            return 0;
        }
    }
    if(k==0)
        printf("not found");
}
