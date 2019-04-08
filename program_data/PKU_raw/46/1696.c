int main()
{
	int row,col,i,j;
	cin>>row>>col;
	int a[row][col];
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin>>a[i][j];
	int n=0;//n??????1


	while((n<row/2)&&(n<col/2))//??????????
	{
		for(j=n;j<=col-2-n;j++)
			cout<<a[n][j]<<endl;
		for(i=n;i<=row-2-n;i++)

			cout<<a[i][col-1-n]<<endl;

		for(j=col-1-n;j>=1+n;j--)

	   cout<<a[row-1-n][j]<<endl;

		for(i=row-1-n;i>=1+n;i--)
			cout<<a[i][n]<<endl;
		n++;
	}
	//??????????
		for(j=n;j<=col-1-n;j++)
			cout<<a[n][j]<<endl;
		if(row-1-2*n>0)//???????????
		{
		for(i=n+1;i<=row-1-n;i++)
		cout<<a[i][col-1-n]<<endl;

		if(col-2-2*n>0)//??????????
		{
		for(j=col-2-n;j>=n;j--)
			cout<<a[row-1-n][j];
		}
		}
}
