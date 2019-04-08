int main()
{
 int row,col;
 int i,j,n;
 int t=0;
 int array[100][100];
 scanf("%d %d",&row,&col);
 for(i=0;i<row;i++)
  for(j=0;j<col;j++)
   scanf("%d",&array[i][j]);
  for (n=0;n<row;n++)
  { 
   for (i=n;i<col-n;i++)
   {
    printf("%d\n",array[n][i]);
    t++;
   }
   printf("\n");
   if(t==row*col)
	   break;
   for (j=n+1;j<row-n;j++)
   {
    printf("%d\n",array[j][col-n-1]);
    t++;
   }
   printf("\n");
   if(t==row*col)
	   break;
   for (i=col-2-n;i>=n;i--)
   {
    printf("%d\n",array[row-n-1][i]);
    t++;
   }
   printf("\n");
   if(t==row*col)
	   break;
   for (j=row-2-n;j>n;j--)
   {
    printf("%d\n",array[j][n]);
    t++;
   }
   printf("\n");
   if(t==row*col)
	   break;
  }
  return 0;
}
