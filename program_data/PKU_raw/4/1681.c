int row,col,*a;
int main()
{
void out(int i,int j,int k);
int i;
scanf("%d %d",&row,&col);
a=(int *)malloc(row*col*sizeof(int));
for(i=0;i<row*col;i++)
scanf("%d",&a[i]);
printf("%d",a[0]);
for(i=1;i<col;i++)
out(i,i,0);
for(i=1;i<row;i++)
out(i,col-1,i);

return 0;
}

void out(int i,int j,int k)
{
while(j!=-1&&k!=row)
{
printf("\n%d",*(a+k*col+j));
j--;k++;
}
}