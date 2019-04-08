int main(){
    int a,b;
    scanf("%d,%d",&a,&b);
    int sz[8][8];
    int i,j;
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            scanf("%d",&sz[i][j]);
        }
    }
    int max,num;
    int k,l,m;
    l=0;
    m=0;
    for(i=0;i<a;i++){
        max=sz[i][0];
        num=0;
        for(j=0;j<b;j++){
            if(sz[i][j]>max){
                max=sz[i][j];
                num=j;
            }
        }
        for(k=0;k<a;k++){
            if(sz[k][num]>sz[i][num]){
                l++;
            }
        }
        if(l==a-1){
            printf("%d+%d",i,num);
            break;
        }
        m++;
    }
    if(m==a){
        printf("No");
    }
    return 0;
}
