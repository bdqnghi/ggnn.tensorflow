int main()
{
	int row,col,i,j,k;
	cin>>row>>col;
	int a[100][100];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>a[i][j];
	for(i=0;i<col;i++)
	{
		for(j=0;j<row&&i-j>=0;j++)
			cout<<a[j][i-j]<<endl;
	}
	for(i=1;i<row;i++)
	{
		for(j=0;j<row-i&&col-1-j>=0;j++)
			cout<<a[i+j][col-1-j]<<endl;
	}
	return 0;
}
