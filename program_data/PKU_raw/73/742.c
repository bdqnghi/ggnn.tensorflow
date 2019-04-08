main()
{
    int mx[8],count=0;
    for(int i=1;i<=5;i++)mx[i]=0;
    int my[8] ;
    int a[8][8];
    for(int j=1;j<=5;j++)
        for(int i=1;i<=5;i++)
            {
                scanf("%d",&a[j][i]);
            }
    for(int h=1;h<=5;h++)
        for(int k=1;k<=5;k++)//heng
        {
            if(a[h][k]>=mx[h])mx[h]=a[h][k];

            //if(a[h][k]>=mx[h])mx[h]=a[h][k];
        }

            //=100000;
           for(int k=1;k<=5;k++)
                my[k]=1000000;
            for(int k=1;k<=5;k++)
                for(int h=1;h<=5;h++)
                if(a[h][k]<=my[k])my[k]=a[h][k];

     for(int j=1;j<=5;j++)
        for(int i=1;i<=5;i++)
            {
                if(a[j][i]==mx[j]&&a[j][i]==my[i])
                {
                    printf("%d %d %d",j,i,a[j][i]);
                    count=1;
                }
            }
    if(count==0)printf("not found");


}
