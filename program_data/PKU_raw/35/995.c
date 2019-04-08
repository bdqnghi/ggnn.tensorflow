int main()
{
 int i,j,r,row,col,flag1,p=0,a[8][8],max,minnum;
 scanf("%d,%d",&row,&col);
 for(i=0;i<row;i++)
  for(j=0;j<col;j++)
   scanf("%d",&a[i][j]);
 for(i=0;i<row;i++)
 {
  max=a[i][0];
  minnum=0;
  for(j=0;j<col;j++)
   if(a[i][j]>max)
   {
    max=a[i][j];
    minnum=j;
   }
  for(r=0,flag1=1;r<row&&flag1;r++)
   if(max>a[r][minnum])
    flag1=0;
   if(flag1)
   {
    printf("%d+%d",i,minnum);
    p=1;
   }
 }
 if(p!=1)
  printf("No");
return 0;
}