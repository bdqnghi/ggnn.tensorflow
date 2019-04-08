int main(){
 int row,col,xx_row,sx_row,xx_col,sx_col,a[100][100],i,j;
 scanf("%d%d",&row,&col);
 for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   scanf("%d",&a[i][j]);
  }
 }
 xx_row=0;
 sx_row=row;
 xx_col=0;
 sx_col=col;
 while((xx_row<=sx_row)&&(xx_col<=sx_col)){
  for(j=xx_col;j<sx_col;j++){
   printf("%d\n",a[xx_row][j]);
  }
 
  for(i=xx_row+1;i<sx_row;i++){
   printf("%d\n",a[i][sx_col-1]);
  }
  if(xx_row>=sx_row-1){
   break;
  }
      if(xx_col>=sx_col-1){
   break;
  }
  for(j=sx_col-2;j>xx_col;j--){
   printf("%d\n",a[sx_row-1][j]);
  }
  for(i=sx_row-1;i>xx_row;i--){
   printf("%d\n",a[i][xx_col]);
  }
  xx_row++;
  xx_col++;
  sx_row--;
  sx_col--;
 }

 
 
 return 0;
}