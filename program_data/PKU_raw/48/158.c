int num[9][9][5];
int day;
int zz(int d)
{
	int i,j;
	if(d==day+1)
		return 0;
	if(d!=day+1)
	{
	    for(i=0;i<9;i++)
		{
			for(j=0;j<9;j++)
			{
					num[i][j][d]+=2*num[i][j][d-1];
					num[i-1][j-1][d]+=num[i][j][d-1];
					num[i-1][j][d]+=num[i][j][d-1];
					num[i-1][j+1][d]+=num[i][j][d-1];
					num[i+1][j-1][d]+=num[i][j][d-1];
					num[i+1][j][d]+=num[i][j][d-1];
					num[i+1][j+1][d]+=num[i][j][d-1];
					num[i][j+1][d]+=num[i][j][d-1];
					num[i][j-1][d]+=num[i][j][d-1];
			}
		}
	}
	zz(d+1);
	return 0;
}
int main()
{
	int m;
	int i,j,k;
	cin>>m>>day;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			for(k=0;k<day;k++)
				num[i][j][k]=0;
		}
	}
	num[4][4][0]=m;
	zz(1);
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(j!=8)
				cout<<num[i][j][day]<<" ";
			if(j==8)
				cout<<num[i][j][day]<<'\n';
		}
	}
	return 0;
}