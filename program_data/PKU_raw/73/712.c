main()
{
    int i,j,c=0;
    int a[5][5]={0},result[5][5]={0};
    int temp,tempi,tempj;
    for (i=0;i<5;i++)
    for (j=0;j<5;j++)
    {
        scanf("%d",&a[i][j]);
    }
    //??i??????????result[5][5]?
    for (i=0;i<5;i++)
    {
        tempj=0;
        temp=a[i][0];
        for (j=1;j<5;j++)
        if (a[i][j]>temp)
        {
            temp=a[i][j];
            tempj=j;
        }
        result[i][tempj]=1;
    }
    //??j??????
    for (j=0;j<5;j++)
    {
        tempi=0;
        temp=a[0][j];
        for (i=1;i<5;i++)
        if (a[i][j]<temp)
        {
            temp=a[i][j];
            tempi=i;
        }
        result[tempi][j]++;
        if (result[tempi][j]==2)
        {printf("%d %d %d",tempi+1,j+1,a[tempi][j]);
        c=1;}
    }
    if (c==0)
    printf("not found");

}

