int main()
{
    int a[4][2]={0,1,1,0,0,-1,-1,0};
    int i,n,m,j,p;
    int map[200][200];
    int x,y;
    scanf("%d%d",&n,&m);
    for(i=0;i<=n+1;i++)
    for(j=0;j<=m+1;j++)
    map[i][j]=-1;
    for(i=1;i<=n;i++)
    for(j=1;j<=m;j++)
    scanf("%d",&map[i][j]);
    x=1;y=1;p=0;
    printf("%d",map[1][1]);
    map[1][1]=-1;
    while(1)
    {
            if(map[x+a[p][0]][y+a[p][1]]!=-1)
            {
                                             x+=a[p][0];
                                             y+=a[p][1];
                                             printf("\n%d",map[x][y]);
                                             map[x][y]=-1;
            }
            else
            {
                p=(p+1)%4;
                if(map[x+a[p][0]][y+a[p][1]]!=-1)
            {
                                             x+=a[p][0];
                                             y+=a[p][1];
                                             printf("\n%d",map[x][y]);
                                             map[x][y]=-1;
            }
            else
            break;
            }
    }
    //getch();
    return 0;
}
