int main(){
    int n,m,a[5][5],i,j,t;
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
            scanf("%d",&(a[i][j]));
        }
    }
    scanf("%d %d",&n,&m);
    if(n>=0&&n<=4&&m>=0&&m<=4){
        for(i=0;i<5;i++){
            t=a[n][i];
            a[n][i]=a[m][i];
            a[m][i]=t;
        }
        for(j=0;j<4;j++){
            printf("%d ",a[0][j]);
        }
        printf("%d\n",a[0][4]);
        for(j=0;j<4;j++){
            printf("%d ",a[1][j]);
        }
        printf("%d\n",a[1][4]);
        for(j=0;j<4;j++){
            printf("%d ",a[2][j]);
        }
        printf("%d\n",a[2][4]);
        for(j=0;j<4;j++){
            printf("%d ",a[3][j]);
        }
        printf("%d\n",a[3][4]);
        for(j=0;j<4;j++){
            printf("%d ",a[4][j]);
        }
        printf("%d\n",a[4][4]);
    }else{
        printf("error");
    }
    return 0;
}
