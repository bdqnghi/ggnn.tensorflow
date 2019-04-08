int main()
{
int row,col;
int i,j,m,span=0;
scanf("%d%d",&row,&col);
int array[100][100];
for(i=0;i<row;i++)
   for(j=0;j<col;j++)
    scanf("%d",&array[i][j]);
   for (m=0;;m++)
   {
    for (i=m;i<col-m;i++)
    {
     printf("%d\n",array[m][i]);
     span++;
    }
    printf("\n");
    if(span==row*col)break;
    for (j=m+1;j<row-m;j++)
    {
     printf("%d\n",array[j][col-m-1]);
     span++;
    }
    printf("\n");
    if(span==row*col)break;
    for (i=col-2-m;i>=m;i--)
    {
     printf("%d\n",array[row-m-1][i]);
     span++;
    }
    printf("\n");
    if(span==row*col)break;
    for (j=row-2-m;j>m;j--)
    {
     printf("%d\n",array[j][m]);
     span++;
    }
    printf("\n");
    if(span==row*col)break;
   }
   return 0;
}

