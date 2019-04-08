main()
{
    int a[15][15],i=0,j=0,s=0,m=0,h=0,g[]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},b[15];
    while(1)
    {
        scanf("%d",&a[i][j]);
        if(a[i][j]==0)
        {
            b[i]=j;
            i=i+1;
            j=0;

        }
        else if(a[i][j]==-1)
        {
            break;
        }
        else j=j+1;
    }
    for(s=0;s<i;s++)
    {
        for(m=0;m<b[s];m++)
        {
            for(h=0;h<b[s];h++)
            {
                if(a[s][m]==2*a[s][h])
                {
                    g[s]=g[s]+1;
                }
            }
        }
    }
    for(s=0;s<i;s++)
    {
        printf("%d\n",g[s]);
    }
    return 0;
}