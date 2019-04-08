int main ()
{
    int a[100][100],b[100][100],c[100][100],x1,y1,x2,y2,i,j,k;
    scanf ("%d %d",&x1,&y1);
    for (i=1;i<=x1;i++)
    for (j=1;j<=y1;j++)
    scanf ("%d",&a[i-1][j-1]);
    scanf ("%d %d",&x2,&y2);
    for (i=1;i<=x2;i++)
    for (j=1;j<=y2;j++)
    scanf ("%d",&b[i-1][j-1]);
    for (i=0;i<=x1-1;i++)
    for (j=0;j<=y2-1;j++)
    c[i][j]=0;
    for (i=0;i<=x1-1;i++)
    for (j=0;j<=y2-1;j++)
    for (k=0;k<=y1-1;k++)
    c[i][j]+=a[i][k]*b[k][j];
    for (i=1;i<=x1;i++)
    for (j=1;j<=y2;j++)
    if (j!=y2)
    {printf ("%d ",c[i-1][j-1]);}
    else
    {printf ("%d\n",c[i-1][j-1]);}
    return 0;
}