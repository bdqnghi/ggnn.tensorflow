main()
{
    int a[5][5],i,j,k,t1,t2,sum;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    sum=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            t1=0;
            t2=0;
            for(k=0;k<5;k++)
            {
                if(a[i][k]>a[i][j])
                t1++;
                if(a[k][j]<a[i][j])
                t2++;
            }
            if(t1==0&&t2==0)
            {
                printf("%d %d %d",i+1,j+1,a[i][j]);
                sum++;
            }
        }
    }
    if(sum==0)
    printf("not found");
}
