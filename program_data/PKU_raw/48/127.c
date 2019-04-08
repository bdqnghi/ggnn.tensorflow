void spread (int [9][9]);
int main()
{
	int a[9][9];
	int m,n;
	int i,j;
	cin>>m>>n;
	for (i=0;i<9;i++)
		for (j=0;j<9;j++)
			a[i][j]=0;
	a[4][4]=m;
	for (i=0;i<n;i++)
		spread(a);
	for(i=0;i<9;i++)
	{
		cout<<a[i][0];
		for (j=1;j<9;j++)
			cout<<" "<<a[i][j];
		cout<<endl;
	}
	return 0;
}
void spread(int a[9][9])
{
	int b[9][9];
	int i,j;
	int p,q;
	for (i=0;i<9;i++)
		for (j=0;j<9;j++)
			b[i][j]=a[i][j];
	for (i=0;i<9;i++)
	{
		for (j=0;j<9;j++)
		{
			if (b[i][j]!=0)
			{
				for (p=i-1;p<=i+1;p++)
					for (q=j-1;q<=j+1;q++)
						a[p][q]+=b[i][j];
			}
		}
	}
}