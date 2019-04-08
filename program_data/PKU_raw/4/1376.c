int main()
{
  int row,col,a[100][100],i,k,j;
  scanf("%d %d",&row,&col);
  for(k=0;k<row;k++){
    for(i=0;i<col;i++){
      scanf("%d",&(a[k][i]));
    }
  }
  for(i=0;i<201;i++){
    k=0;
    j=i;
    while(j>=0){
      if(0<=j&&j<col&&0<=k&&k<row)printf("%d\n",a[k][j]);
      j--;
      k++;
    }
  }
  return 0;
}
