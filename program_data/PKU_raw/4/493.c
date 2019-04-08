int main()
{
	int a[101][101], r, c, r1, c1; 
	int i, l, j, k, m, n;
	cin >>r>>c;
	for(m=0; m<=100; m++)
	{
		for(n=0; n<=100; n++)
		{
			a[m][n]=-1;
		}
	}
	for(i=1; i<=r; i++)
	{
		for(j=1; j<=c; j++)
		{
			cin>>a[i][j];
		}
	}
	for(k=1; k<=c; k++)
	{
		c1 = k;
		r1 = 1;
		while(a[r1][c1]>0)
		{
			cout<<a[r1++][c1--]<<endl;
		}
	}
	for(l=2; l<=r; l++)
	{
		c1 = c;
		r1 = l;
		while(a[r1][c1]>0)
		{
			cout<<a[r1++][c1--]<<endl;
		}
	}
	return 0;
}