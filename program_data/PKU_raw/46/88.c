int main()
{
int row,col,i,j;
int ss[100][100];
scanf("%d %d",&row,&col);
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
scanf("%d",&(ss[i][j]));
}
}
for(int k=0;k<(col+1)/2&&k<(row+1)/2;k++)
{
for(j=k;j<col-k;j++)
{
printf("%d\n",ss[k][j]);
}
if(k+1 >= row-k)
break;
for(i=k+1;i<row-k;i++)
{
printf("%d\n",ss[i][col-k-1]);
}
if(col-k-2 < k)
break;
        for(j=col-k-2;j>=k;j--)
{
printf("%d\n",ss[row-k-1][j]);
}
if(row-k-2 < k+1)
break;
for(i=row-k-2;i>=k+1;i--)
{
printf("%d\n",ss[i][k]);
}
}
    return 0;
}
