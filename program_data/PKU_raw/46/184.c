int main()
{
 int array[100][100],row,col,i,k,j,t=0;
 scanf("%d%d",&row,&col);
    int m=row*col;
 for(i=0;i<row;i++)
 {
  for(k=0;k<col;k++)
  {
   scanf("%d",&array[i][k]);
  }
 }

 for(j=0;;j++)
 {

  for(k=j;k<=col-1-j;k++)
  {
   printf("%d\n",array[j][k]);
   t++;
  }
  if(t==m) break;

  for(i=j+1;i<=row-1-j;i++)
  {
   printf("%d\n",array[i][col-j-1]);
   t++;
  }
  if(t==m) break;

  for(k=col-j-2;k>=j;k--)
  {
   printf("%d\n",array[row-j-1][k]);
   t++;
  }
  if(t==m) break;

  for(i=row-j-2;i>j;i--)
  {
   printf("%d\n",array[i][j]);
   t++;
  }
  if(t==m) break;
 }

    return 0;
}