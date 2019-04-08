int main()
{
    int sz[10000][6];
    int sz1[10000];
    int sz2[10000];
    int sz3[10000];
    int i,j,a,n,e,k,b=0;
    for(i=1;i<=500;i++){
        for(j=1;j<=6;j++){
            scanf("%d",&sz[i][j]);
        }
        b++;
        if(sz[i][1]==0){
            break;
        }
    }
    for(i=1;i<=b-1;i++){
        sz1[i]=3600*sz[i][1]+60*sz[i][2]+sz[i][3];
        sz2[i]=3600*sz[i][4]+60*sz[i][5]+sz[i][6];
        sz3[i]=sz2[i]-sz1[i]+43200;
    }
    for(i=1;i<=b-1;i++){
    printf("%d\n",sz3[i]);}
    return 0;
}

