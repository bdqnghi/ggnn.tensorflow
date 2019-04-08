int main()
{
    int a[1000][1000];
    int i,j;
    int b[1000];
    for(i=0;i<1000;i++){
        for(j=0;j<6;j++){
            scanf("%d",&a[i][j]);
        }
        if(a[i][0]==0) break;
        else{
            b[i]=3600*(12+a[i][3]-a[i][0])+60*(a[i][4]-a[i][1])+a[i][5]-a[i][2];
            printf("%d\n",b[i]);
        }
    }
    return 0;
}
