int a[10][10];
int main()
{
int row,col,ROW,COL;
int sum=0;
int sum1=0;
scanf("%d,%d",&ROW,&COL);
for(row=0;row<ROW;row++)
for(col=0;col<COL;col++)
scanf("%d",&a[row][col]);
for(row=0;row<ROW;row++)
for(col=0;col<COL;col++)
{
for(int colcol=0;colcol<COL;colcol++)
{
if(a[row][col]<a[row][colcol])
sum=1;
}
for(int rowrow=0;rowrow<ROW;rowrow++)
{
if(a[row][col]>a[rowrow][col])
sum=1;
}
if(sum==0)
{
printf("%d+%d",row,col);
sum1=1;
}
sum=0;
}
if(sum1==0)
printf("No");
return 0;
}
