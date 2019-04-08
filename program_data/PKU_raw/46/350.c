int main()
{
    int row,col;
    int i,j,n,time=0;
    scanf("%d%d",&row,&col);
    int array[R][C];
    for(i=0;i<row;i++){
  for(j=0;j<col;j++){
   scanf("%d",&array[i][j]);
  }
 }
 for(n=0;;n++)
 {
  for(i=n;i<=col-n-1;i++)
  {
   printf("%d\n",array[n][i]);
   time++;
  }
  if(time==row*col) break;
  for(j=n+1;j<=row-n-1;j++)
  {
   printf("%d\n",array[j][col-n-1]);
   time++;
  }
  if(time==row*col) break;
  for(i=col-n-2;i>=n;i--)
  {
   printf("%d\n",array[row-n-1][i]);
   time++;
  }
  if(time==row*col) break;
  for(j=row-n-2;j>=n+1;j--)
  {
   printf("%d\n",array[j][n]);
   time++;
  }
  if(time==row*col) break;
 }
 return 0;
} 