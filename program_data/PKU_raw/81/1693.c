int main()
{
    int m,n;
    int fuck[5][5];
    int i,j,k;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&fuck[i][j]);
        }
    }
    scanf("%d %d",&n,&m);
    if(m>=5||n>=5){
        printf("error");
    }
    else{
        for(i=0;i<5;i++){
            k=fuck[n][i];
            fuck[n][i]=fuck[m][i];
            fuck[m][i]=k;
        }
        for(i=0;i<4;i++){
            printf("%d %d %d %d %d\n",fuck[i][0],fuck[i][1],fuck[i][2],fuck[i][3],fuck[i][4]);
        }
        printf("%d %d %d %d %d",fuck[4][0],fuck[4][1],fuck[4][2],fuck[4][3],fuck[4][4]);
    }
    return 0;
}

