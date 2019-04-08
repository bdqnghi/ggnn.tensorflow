int a[10][10],b[10][10],i,j,k;
int main()
{
    int m,n,x1,x2,y1,y2;
    for(i=0;i<10;i++)
    for(j=0;j<10;j++)
    {
        a[i][j]=0;
        b[i][j]=0;
    }
    scanf("%d %d",&m,&n);
    a[4][4]=m;
    x1=y1=x2=y2=4;
    for(i=0;i<n;i++)
    {
        for(j=x1-1;j<=x2+1;j++)
        for(k=y1-1;k<=y2+1;k++)
        b[j][k]=a[j][k]+a[j-1][k-1]+a[j-1][k]+a[j-1][k+1]+a[j][k-1]+a[j][k+1]+a[j+1][k-1]+a[j+1][k]+a[j+1][k+1];
        for(j=0;j<9;j++)
        for(k=0;k<9;k++)
        a[j][k]=a[j][k]+b[j][k];
        x1--;
        y1--;
        x2++;
        y2++;
    }
    for(j=0;j<9;j++)
    for(k=0;k<9;k++)
    if(k!=8)
    printf("%d ",a[j][k]);
    else
    printf("%d\n",a[j][k]);
}
