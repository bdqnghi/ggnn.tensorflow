int main()
{
	int row,col,array[100][100];
	cin>>row>>col;
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			cin>>array[i][j];
	for(int k=0;k<col;k++)
	{
		if(k<row)
			for(int i=0;i<=k;i++)
				cout<<array[i][k-i]<<endl;
		else
			for(int i=0;i<row;i++)
				cout<<array[i][k-i]<<endl;
	}
	for(int k=col;k<row+col-1;k++)
	{
		if(k<row)
			for(int i=k-col+1;i<=k;i++)
				cout<<array[i][k-i]<<endl;
		else
			for(int i=k-col+1;i<row;i++)
				cout<<array[i][k-i]<<endl;
	}
	return 0;
}