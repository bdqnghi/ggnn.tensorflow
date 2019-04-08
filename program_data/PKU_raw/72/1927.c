int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int x,y;
    int i,k;
    int z[m+2][n+2];
    for(i=0;i<m+2;i++){
    for(k=0;k<n+2;k++){
        z[i][k]=0;
    }
    }
    for(i=1;i<m+1;i++){
        for(k=1;k<n+1;k++){
            scanf("%d",&(z[i][k]));
        }
    }
    for(i=1;i<m+1;i++){
    for(k=1;k<n+1;k++){
    if(z[i][k]>=z[i-1][k]&&z[i][k]>=z[i+1][k]&&z[i][k]>=z[i][k-1]&&z[i][k]>=z[i][k+1]){
    printf("%d %d\n",i-1,k-1);
}
}
}    
    return 0;
}
