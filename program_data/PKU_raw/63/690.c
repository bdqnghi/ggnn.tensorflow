void main()
{
    int a[100][100],b[100][100],c[100][100],x,y,i,j,k,x1,y1,x2,y2;
    for(k=1;k<=2;k++)
    {
        scanf("%d%d",&x,&y);
        if(k==1)x1=x,y1=y;
        if(k==2)x2=x,y2=y;
        for(i=0;i<=x-1;i++)
        {
            for(j=0;j<=y-1;j++)
            {
                if(k==1)scanf("%d",&a[i][j]);
                if(k==2)scanf("%d",&b[i][j]);
            }
        }
    }
    for(i=0;i<=x1-1;i++)
    {
        for(j=0;j<=y2-1;j++)
        {
            c[i][j]=0;
            for(k=0;k<=y1-1;k++)
            {
                c[i][j]=c[i][j]+a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<=x1-1;i++)
    {
        for(j=0;j<=y2-1;j++)
        {
            if(j==0) printf("%d",c[i][j]);
            else printf(" %d",c[i][j]);
            if(j==y2-1)printf("\n");
        }
    }
}
