int main()
{
int row,column,a[110][110]={0},i,j,row1=0,column1=0;
cin>>row>>column;
for(i=0;i<row;i++)
for(j=0;j<column;j++)
{
	cin>>*(*(a+i)+j);
	}
for(i=0;i<(row+column-1);i++)
{
	if(i<column)
	column1=i;
	else column1=column-1;
while(column1>=0)
{
	if((i-column1)<row)
	{cout<<*(*(a+i-column1)+column1)<<endl;//a[i-column1][column1]
	column1--;}
	else break;
}
}
return 0;
}