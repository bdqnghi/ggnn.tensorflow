int main(){
    int m,n,i,j;
    scanf("%d %d\n",&m,&n);
    int l[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&l[i][j]);
        }
    }
    if(l[0][0]>=l[0][1]&&l[0][0]>=l[1][0]){printf("0 0\n");}
    for(j=1;j<n-1;j++){
        if(l[0][j]>=l[0][j-1]&&l[0][j]>=l[0][j+1]&&l[0][j]>=l[1][j]){
            printf("0 %d\n",j);
        }
    }
    if(l[0][n-1]>=l[0][n-2]&&l[0][n-1]>=l[1][n-1]){printf("0 %d\n",n-1);}
    for(i=1;i<m-1;i++){
        if(l[i][0]>=l[i-1][0]&&l[i][0]>=l[i+1][0]&&l[i][0]>=l[i][1])
            {printf("%d 0\n",i);}
        for(j=1;j<n-1;j++){
            if((l[i][j]>=l[i-1][j])&&(l[i][j]>=l[i+1][j])&&(l[i][j]>=l[i][j-1])&&(l[i][j]>=l[i][j+1])){
                printf("%d %d\n",i,j);
            }
        }
        if(l[i][n-1]>=l[i-1][n-1]&&l[i][n-1]>=l[i+1][n-1]&&l[i][n-1]>=l[i][n-2])
            {printf("%d %d\n",i,n-1);}
    }
    if(l[m-1][0]>=l[m-1][1]&&l[m-1][0]>=l[m-2][0]){printf("%d 0\n",m-1);}
    for(j=1;j<n-1;j++){
        if(l[m-1][j]>=l[m-1][j-1]&&l[m-1][j]>=l[m-1][j+1]&&l[m-1][j]>=l[m-2][j])
            {printf("%d %d\n",m-1,j);}
    }
    if(l[m-1][n-1]>=l[m-1][n-2]&&l[m-1][n-1]>=l[m-2][n-1]){printf("%d %d\n",m-1,n-1);}
    return 0;
}