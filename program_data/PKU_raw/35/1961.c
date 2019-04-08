int main()
{
	int sz[Row][Col];
	int i,k,m,j,row,col, temp1=0,temp2=0;
	scanf("%d,%d",&row,&col);
	for (i=0;i<row;i++)
	{
	for (j=0;j<col;j++)
		{
			scanf("%d",&(sz[i][j]));
		}
	}
	for (i=0;i<row;i++){
for (j=0;j<col;j++)
{
for (k=0;k<col;k++)
{
	if (k==j)
		continue;
    if (sz[i][j]>sz[i][k])
	{temp1++;}
}
for (m=0;m<row;m++)
{
	if (m==i)
		continue;
	if (sz[i][j]<sz[m][j])
	{
       temp2++;
	}
}
	if(temp1==col-1&&temp2==row-1)
	{printf("%d+%d\n",i,j);	break;}
	else 
	{
		temp1=0;
		temp2=0;

	}
}
if(temp1==col-1&&temp2==row-1)
 break;
	}
if (temp1==0&&temp2==0)
{printf("No\n");}
return 0;
}
