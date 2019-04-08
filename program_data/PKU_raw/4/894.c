int main()
{
	int row,col,time=0,i,j,n;
	int array[110][110];
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>*(*(array+i)+j);
		}
	}
	for(int i=0;i<=row+col-2;i++)
	{
		if(i<col)
		{
			for(int j=0;j<row&&j<=i;j++)   
				cout<<*(*(array+j)+i-j)<<endl;
		}
		else
		{
			for(int j=col-1;j>=i-row+1&&j>=0;j--)    
				cout<<*(*(array+i-j)+j)<<endl;
		}
	}
	return 0;
}