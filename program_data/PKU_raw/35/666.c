int main()
{
    int sz[8][8];
    int row,col,i,j,k,max=0,f=0,g=0,m,n;
    scanf("%d,%d",&row,&col);
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&sz[i][j]);
            }
            }
    for(i=0;i<row;i++){
       for(j=0;j<col;j++){
          if(max<sz[i][j]){
             max=sz[i][j];
             m=i;
             n=j;
             }
             }
          for(k=0;k<row;k++){
             if(max>sz[k][n])  f=1;
             }
          if(f==0){
                  printf("%d+%d",m,n);
                  g=1;
                  }
                  }
    if(g==0) printf("No");
    return 0;
}