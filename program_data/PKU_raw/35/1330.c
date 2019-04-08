int row, col;
int array[8][8];
int ctr1,ctr2,ctr3,ctr4;
int i;
int j=0;

int main(void)
{
scanf("%d,%d",&row,&col);

for(ctr1=0;ctr1<row;ctr1++)
{
for(ctr2=0;ctr2<col;ctr2++)
{
scanf("%d",&array[ctr1][ctr2]);
}
}
for(ctr1=0;ctr1<row;ctr1++)
{
for(ctr2=0;ctr2<col;ctr2++)
{
i=0;
for(ctr3=0;ctr3<col;ctr3++)
{if(array[ctr1][ctr2]>array[ctr1][ctr3])
i++;}
for(ctr4=0;ctr4<row;ctr4++)
{if(array[ctr4][ctr2]>array[ctr1][ctr2])
i++;}
if(i==row+col-2)
{j++;
printf("%d+%d",ctr1,ctr2);
}
}
}
if(j==0)
printf("No");
return 0;
}