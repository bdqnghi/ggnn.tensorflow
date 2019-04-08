int main()
{
    int row,col;
    int i,j,temp,x,y,flag=0;
    int a[8][8];
    scanf("%d,%d",&row,&col);
    for(i=0;i<row;++i)
        for(j=0;j<col;++j)
           scanf("%d",a[i]+j);
    for(i=0;i<row;++i)
    {
        flag=0;
        temp=-1000000;
        for(j=0;j<col;++j)
            if(temp<a[i][j])
            {
                temp=a[i][j];
                y=j;
            }
        for(x=0;x<row;++x)
            if(a[x][y]<temp)
            {
                flag=1;
                break;
            }
        if(flag==0)
        {
            printf("%d+%d",i,y);
            return 0;
        }
    }
    printf("No");
    return 0;
}
