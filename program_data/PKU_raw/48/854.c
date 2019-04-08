int main()
{
	int arr[9][9]={{0}},m,n;
	cin>>m>>n;
        arr[4][4]=m;
	for(;n>0;n--)
	{
		int temp[9][9]={{0}};
		for(int i=0;i<9;i++)
			for(int j=0;j<9;j++)
			{
				if(arr[i][j]>0)
				{
					temp[i][j]+=2*arr[i][j];
					temp[i-1][j-1]+=arr[i][j];
					temp[i-1][j]+=arr[i][j];
					temp[i-1][j+1]+=arr[i][j];
					temp[i][j-1]+=arr[i][j];
					temp[i][j+1]+=arr[i][j];
					temp[i+1][j]+=arr[i][j];
					temp[i+1][j-1]+=arr[i][j];
					temp[i+1][j+1]+=arr[i][j];
				}
			}
		for(int i=0;i<9;i++)
			for(int j=0;j<9;j++)
				arr[i][j]=temp[i][j];
	}
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<8;j++)
			cout<<arr[i][j]<<' ';
		cout<<arr[i][8]<<endl;
	}
	return 0;
}