int main()
{
    int sz[10000][6];
    int time[10000];
    int num=0;
    for(int i=0;i<10000;i++)
    {
        for(int j=0;j<6;j++)
        {
            scanf("%d",&sz[i][j]);
        }
        num++;
        if(sz[i][0]==0&&sz[i][1]==0
        &&sz[i][2]==0&&sz[i][3]==0
        &&sz[i][4]==0&&sz[i][5]==0)break;
    }
    num=num-1;
    for(int i=0;i<num;i++)
    {
        time[i]=3600*12-sz[i][0]*3600-sz[i][1]*60-sz[i][2]
                +3600*sz[i][3]+60*sz[i][4]+sz[i][5];
        printf("%d\n",time[i]);
    }
    return 0;
}