int main()
{
    int a,b;
    scanf("%d,%d",&a,&b);
    int sz[9][9];
    int i,j;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&sz[i][j]);
        }
    }
    int m=0;
    for(i=0;i<a;i++){
        int max;
        int bb=0;
        max=sz[i][0];
        for(j=0;j<b-1;j++){
            if(sz[i][j]<sz[i][j+1]){
                max=sz[i][j+1];
                bb=j+1;
            }
        }
       // printf("%d ",max);
        //printf("%d ",bb);
        int s=0;
        int q;
        for(q=0;q<a;q++){
            if(max<=sz[q][bb]) s++;
        }
        if(s==a){
            printf("%d+%d",i,bb);
            break;
        }
        m++;
    }
    if(m==a) printf("No");
    return 0;
}
