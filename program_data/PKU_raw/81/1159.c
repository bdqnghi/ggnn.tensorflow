int b[5]={0,1,2,3,4};
int a[5][5],x,y,i,j;
int main()
{
    for (i=0;i<5;i++)
        for (j=0;j<5;j++)
            scanf("%d",&a[i][j]);
    scanf("%d %d",&x,&y);
    b[x]=y;
    b[y]=x;
    if (x<0 || x>4 || y<0 || y>4)
    {
        printf("error\n");
        return 0;
    }
    for (i=0;i<5;i++)
    {
        for (j=0;j<4;j++)
            printf("%d ",a[b[i]][j]);
        printf("%d\n",a[b[i]][j]);
    }
    return 0;
}