int main()
{
    int a[1000][1000],b[1000][1000],c[1000][1000]={0};
    int xo,yo,xt,yt;
    scanf("%d %d",&xo,&yo);
    for(int i=0;i<xo;i++)
    {
            for (int j=0;j<yo;j++)
            {
                scanf("%d",&a[i][j]);
            }
    }
    scanf("%d %d",&xt,&yt);
    for(int r=0;r<xt;r++)
    {
            for (int t=0;t<yt;t++)
            {
                scanf("%d",&b[r][t]);
            }
    }
    for(int k=0;k<xo;k++)
    {
             for(int l=0;l<yt;l++)
             {
                     for(int h=0;h<yo;h++)
                     {
                             c[k][l]=c[k][l]+a[k][h]*b[h][l];
                     }
             }
    }
    for(int q=0;q<xo;q++)
    {
            for(int w=0;w<yt-1;w++)
            {
                    printf("%d ",c[q][w]);
            }
            printf("%d\n",c[q][yt - 1]);
    }
}