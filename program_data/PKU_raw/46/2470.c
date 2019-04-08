int main()
{
	int a[110][110],i,j,row,col;
	cin>>row>>col;
	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	int num=0,n=0;
	for (n=0;n<=500;n++)
	{
		for (int i1=n;i1<=col-n-1;i1++)
		{
			cout<<a[n][i1]<<endl;
			num+=1;
		}
		if (num>=row*col)
			break;
		for (int i2=n+1;i2<=row-n-1;i2++)
		{
			cout<<a[i2][col-n-1]<<endl;
			num++;
		}
		if (num>=row*col)
			break;
		for (int i3=col-n-2;i3>=n;i3--)
		{
			cout<<a[row-n-1][i3]<<endl;
			num++;
		}
		if (num>=row*col)
			break;
		for (int i4=row-n-2;i4>n;i4--)
		{
			cout<<a[i4][n]<<endl;
			num++;
		}
		if (num>=row*col)
			break;
	}
	return 0;
}
