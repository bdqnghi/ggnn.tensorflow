int main()
{
	int row,col,i,j,array[100][100]={0},point=0;
	cin>>row>>col;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>array[i][j];
	for(j=0;j<col;j++)
	{
		point=j;i=0;
		do
		{
			cout<<array[i++][point--]<<endl;
		}
		while(point>=0&&i<row);
	}
	for(i=1;i<row;i++)
	{
		point=i;j=col-1;
		do
		{
			cout<<array[point++][j--]<<endl;
		}
		while(point<row&&j>=0);
	}
	return 0;
}