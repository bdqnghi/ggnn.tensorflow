
int main()
{
	int x[5][5],i,j,m,r,c;
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			cin>>x[i][j];
	for(i=0;i<5;i++)
	{
		m=1<<31;
		for(j=0;j<5;j++)
		{
			if(x[i][j]>m)
			{
				m=x[i][j];
				r=i;c=j;
			}
		}
		if(m<=x[0][c] && m<=x[1][c] && m<=x[2][c] && m<=x[3][c] && m<=x[4][c])
		{
			cout<<r+1<<" "<<c+1<<" "<<m<<endl;
			return 0;
		}
	}
	cout<<"not found\n";
	return 0;
}