
int main()
{
 int row,col;
 int i,j,k,time=0;
 scanf("%d%d",&row,&col);
 int array[100][100];

for(i=0;i<row;i++)
{
 for(j=0;j<col;j++)
 {
 scanf("%d",&array[i][j]);
 }
}

 for (k=0;;k++)
 {
          for (i=k;i<col-k;i++)
          {
            printf("%d\n",array[k][i]);
            time++;
          
          if(time==row*col)break;}
if(time==row*col)break;
          for (j=k+1;j<row-k;j++)
          { 
            printf("%d\n",array[j][col-k-1]);
            time++;
          
          if(time==row*col)break;}if(time==row*col)break;
          for (i=col-2-k;i>=k;i--)
          {
            printf("%d\n",array[row-k-1][i]);
            time++;
          
          if(time==row*col)break;}if(time==row*col)break;
          for (j=row-2-k;j>k;j--)
          { 
            printf("%d\n",array[j][k]);
            time++;
          
          if(time==row*col)break;
}if(time==row*col)break;
 }
return 0;
}