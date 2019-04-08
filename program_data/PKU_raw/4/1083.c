int main()
{
	int row,col;
	cin>>row>>col;
	int m=1,n=1;
	int h,g;
	int a[100][100];
	for(int i=1;i<=row;i++)
		for(int j=1;j<=col;j++)
			cin>>a[i][j];
	while(m<=row)
	{
		h=m;g=n;
		while(h<=row&&g>=1)
		{
			cout<<a[h][g]<<endl;
			h++;g--;
		}
		if(n<col) n++;
		else m++;
	}
	return 0;
}
