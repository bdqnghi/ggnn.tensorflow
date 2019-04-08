int main()
{
	int i,j,n,m,a[11][11]={0},b[11][11]={0};
	cin >> m >> n;
	a[5][5]=m;b[5][5]=m;
	while(n)
	{
		n--;
		for(i=1;i<10;i++)
		{
			for(j=1;j<10;j++)
			{
				if(a[i][j]>0)
				{
					b[i][j]+=a[i][j];
					b[i+1][j]+=1*a[i][j];
					b[i][j+1]+=1*a[i][j];
					b[i-1][j]+=1*a[i][j];
					b[i][j-1]+=1*a[i][j];
					b[i+1][j+1]+=1*a[i][j];
					b[i+1][j-1]+=1*a[i][j];
					b[i-1][j+1]+=1*a[i][j];
					b[i-1][j-1]+=1*a[i][j];
				}
			}
		}
		for(i=1;i<10;i++)
			for(j=1;j<10;j++)
			    a[i][j]=b[i][j];
	}
	for(i=1;i<10;i++)
	{
		for(j=1;j<9;j++)
			cout << a[i][j] << " ";
		cout << a[i][9] << endl;
	}
	return 0;
}