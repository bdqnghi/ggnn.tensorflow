main()
{
    int p[5][81];//?????????
    int m,n;//m??????????? n???????
    scanf("%d %d",&m,&n);

    int i,j,k;//??????
    for(i=0;i<=n;i++)
    {
        for(j=0;j<81;j++)
        {
                         p[i][j]=0;
        }

        //??????????????
    }
    p[0][40]=m;//??????????????
    int add;//??
    for(k=0;k<n;k++)
    {
        for(i=0;i<81;i++)
        {
            add=p[k][i];

                p[k+1][i]+=2*add;
                p[k+1][i-1]+=add;
                p[k+1][i+1]+=add;
                p[k+1][i-8]+=add;
                p[k+1][i-9]+=add;
                p[k+1][i-10]+=add;
                p[k+1][i+8]+=add;
                p[k+1][i+9]+=add;
                p[k+1][i+10]+=add;


        }
    }
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            printf("%d",p[n][i*9+j]);
            if(j<8) printf(" ");
            else printf("\n");
        }
    }
}

