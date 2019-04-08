int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int array[row][col];
    int i,j,k;
    for(i=0;i<row;i++){
                       for(j=0;j<col;j++){
                                          scanf("%d",&array[i][j]);
                                          }
                       }
    for(i=0;i<col;i++){
                       for(j=i,k=0;k<row && j>-1;j--,k++){
                                                 printf("%d\n",array[k][j]);
                                                 }
                       }
    for(i=1;i<row;i++){
                       for(j=i,k=col-1;j<row && k>-1;j++,k--){
                                                      printf("%d\n",array[j][k]);
                                                      }
                       }
    return 0;
}
